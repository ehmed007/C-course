#include <stdio.h>
#include <stdlib.h>

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
    
    for (int i=0; i<5; i++) {
        aya = linklist();
        if (start == NULL) {
            start = aya;
            assist = aya;
            assist->next=NULL;
            continue;
        }
        assist->next = aya;
        assist = aya;
        assist->next = NULL; 
    }
    return start;
}

void showlist(const struct node* temp) {
    while (temp != NULL) {
        printf("value _ %d \n",temp->no);
        temp = temp->next;
    }
}

int main() {
    struct node* list;
    aya = creatingLinklist(list);
    showlist(aya);
    return 0;
}