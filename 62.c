#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


struct node {
    char name[30];
    char cnic[30];
    int code;
    int index;
    struct node* next;
};

void menu();
void addnode();
void displaylist(const struct node* temp);
void removenode(int num);
void findandinsert(int toFind);


int loc=1;
int num1;
struct node* list = NULL;
struct node* assist = NULL;


int main() {  
    char opt;
    while (1) {
        menu();
        opt = getch();
        switch (opt) {
            case '1':
                system("CLS"); 
                addnode();
                system("CLS");
                break;
            case '2':
                if (list == NULL) {
                    system("CLS");
                    printf("\n\n~~~~NO RECORDS TO DISPLAY.~~~~\n");
                    printf("\n\npress any key to see menu_");
                    getch();
                    system("CLS");
                    break;
                }
                system("CLS");
                displaylist(list);
                printf("press any key to see menu_");
                getch();
                system("CLS");
                break;
            case '3':
                if (list == NULL) {
                    system("CLS");
                    printf("\n\n~~~~NO RECORDS TO REMOVE.~~~~\n");
                    printf("\n\npress any key to see menu_");
                    getch();
                    system("CLS");
                    break;
                }
                system("CLS");
                displaylist(list);
                printf("\n\nenter a index of a record u want to remove : ");
                scanf("%d",&num1);
                removenode(num1);
                system("CLS");
                displaylist(list);
                printf("\nRECORD successfully removed. ");
                printf("\n\npress any key to see menu_");
                getch();
                system("CLS");
                break;
            case '4':
                displaylist(list);
                int toFind,toInsert;
                printf("enter index for to tofind :");
                scanf("%d",&toFind);
                system("CLS");
                findandinsert(toFind);
                break;
            case '0':
                system("CLS");
                exit(0);
                break;
            default:
                printf("\n\nCHOICE INVAID!\n");
        }
    } 
    return EXIT_SUCCESS;
}


void menu() {
    printf("\n\n~~~~~~~~~~~MENU~~~~~~~~~~~~~\n");
    printf("\n\npress 1 for New record : \n");
    printf("press 2 for Display records : \n");
    printf("press 3 for remove record : \n");
    printf("press 4 for insert record : \n");
    printf("press 0 for Exit : \n\n");
    printf("\n\n\n your choice : ");
}

void addnode() {
    struct node* current = (struct node *) malloc(sizeof(struct node));
    current->index = loc;
    printf("\n\nEnter Name : ");
    fflush(stdin);
    gets(current->name);
    printf("\nEnter Cnic : ");
    gets(current->cnic);
    printf("\nEnter Code : ");
    scanf("%d", &current->code);

    char check;
    printf("\n\npress 'S' to Save record or 'D' to Discard_ ");
    fflush(stdin);
    check = getch();
    if (check != 's') {
        system("CLS");
        return;
    } 
    loc++;
    if (list == NULL) {
        list = current;
        assist = current;
        assist->next = NULL;
        return;
    }
    assist->next = current;
    assist = current;
    assist->next = NULL;
    return;
}

void displaylist(const struct node* temp) {
    printf("\n\nRecords\n\n");
    int i=1;
    while (temp != NULL) {
        printf("Record - %d", i);

        printf("\n\nName   : %s", temp->name);
        printf("\nCnic   : %s", temp->cnic);
        printf("\nCode   : %d", temp->code);
        printf("\n\nINDEX  : %d\n\n", temp->index);
        printf("\n\n");
        i++;
        temp = temp->next;
    }
}

void removenode(int num) {
    struct node* hoo = NULL;
    struct node* temp0 = list;
    struct node* assisst = NULL;
    while (temp0 != NULL) {
        if (num == temp0->index) {
            if (assisst == NULL) {
                hoo = list->next;
                free(list);
                list = hoo;
                break; 
            } if (temp0->next == NULL) {
                assisst->next = NULL;
                free(temp0);
                break;
            }
            assisst->next = temp0->next;
            free(temp0);
            break;
        }
        assisst = temp0;
        temp0 = temp0->next;
    }
    return;
}

void findandinsert(int toFind) {
    struct node* temp = list;
    struct node* temp0 = list;
    struct node* current = malloc(sizeof(struct node));
    current->index = loc;
    loc++;
    printf("\n\nEnter Name : ");
    fflush(stdin);
    gets(current->name);
    printf("\nEnter Cnic : ");
    gets(current->cnic);
    printf("\nEnter Code : ");
    scanf("%d", &current->code);
    while (temp != NULL) {
        if (temp->index == toFind) {
            current->next = temp->next;
            temp->next = current;
            return;
        }
        temp = temp->next;
    }
    while(temp0->next != NULL) {
        temp0 = temp0->next;
    }
    temp0->next = current;
    current->next = NULL;
}