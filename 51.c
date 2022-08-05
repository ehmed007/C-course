#include <stdio.h>
#include <stdlib.h>
               
struct node {  
    int data;   
    struct node *next;
};              

void add(struct node *head) {
    int x;
    printf("enter number to remove \n");
    scanf("%d",&x);
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    struct node *ex = (struct node *)malloc(sizeof(struct node));
    ex = head;
    while (head!=NULL) {
        if(head->data == x) {
            if (temp == NULL) {
                head=ex->next;
                break;
            }
            temp->next = head->next;
            free(head);
            break;
        }
        temp = head;
        head = head->next;
    }
}

int main() {    
    struct node *current = NULL;
    struct node *prv = NULL;
    struct node *head = NULL;
    int count; 
    printf("enter the no of records : ");
    scanf("%d",&count);
    for (int i = 0; i < count ; i++) {
        current = ( struct node *)malloc(sizeof(struct node));
        printf("enter the %d data : ",i+1);
        scanf("%d",&current->data);
        if (head == NULL) {
            head = current;
            prv = current;
            continue;
        }      
        prv->next=current;
        prv=current;
        prv->next=NULL;
    }/*          
    while (head!=NULL) {
        printf("value %d\n\n",head->data);
        head = head->next;
    }*/
    add(head);
    while (head!=NULL) {
        printf("value %d\n\n",head->data);
        head = head->next;
    }   
    return 0;
}