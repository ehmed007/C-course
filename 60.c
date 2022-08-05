#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


struct node {
    int no;
    struct node* next;
};

struct node* aya = NULL;
struct node* assist = NULL;

struct node* linklist() {
    struct node* current = (struct node *) malloc (sizeof(struct node));
    printf("enter number : ");
    scanf("%d",&current->no);;
    return current;
}
struct node *creatingLinklist(struct node *start) {
    
    //for (int i=0; i<5; i++) {
        aya = linklist();
        if (start == NULL) {
            start = aya;
            assist = aya;
            assist->next=NULL;
            //continue;
            return start;
        }
        assist->next = aya;
        assist = aya;
        assist->next = NULL; 
    //}
    return start;
}

struct node* removenode(int num, struct node* list) {
    struct node* hoo = NULL;                       
    struct node* temp = list;
    struct node* assist = NULL;
    while (temp != NULL) {
        if (num == temp->no) {
            if (assist == NULL) {
                printf("checkn\n\n");
                hoo = list->next;
                free(list);
                list = hoo;
                break; 
            } if (temp->next == NULL) {
                assist->next = NULL;
                free(temp);
                break;
            }
            assist->next = temp->next;
            free(temp);
            break;
        }
        assist = temp;
        temp = temp->next;
    }
    return list;
}
int main() {
    int num;
    struct node* start = NULL;
    struct node* list = creatingLinklist(start);
    struct node* temp = list;
    printf("list : \n");
    while (temp != NULL) {
        printf (" value _ %d\n",temp->no);
        temp = temp->next;
    }
    while (1) {
        printf("\n\n\nenter a number to remove : ");
        scanf("%d",&num);

        struct node* spare = removenode(num, list);
        temp = spare;
        printf("list after removing a element : \n");
        while (temp != NULL) {
            printf (" value _ %d\n",temp->no);
            temp = temp->next;
        }
    }
    return EXIT_SUCCESS;
}