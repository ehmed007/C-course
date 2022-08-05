#include <stdio.h>
#include <string.h>


struct node {
    char name[30];
    int roll;
    struct node *next;
};

struct node one;

struct node *createstruct(char array[], int roll) {
    strcpy(one.name, array); 
    one.roll = roll; 
    return &one;
}

int main() {  
    struct node *first = NULL;
    struct node *middle = NULL;  
    struct node *last = NULL;  
    struct node *current;
    int count;  
    printf("\nenter the number of records u wannna enter : ");
    scanf("%d",&count);  
    for (int i = 0; i < count; i++) {
        char array[20];  
        int roll; 
        printf("\nenter the name : ");
        scanf("%s",array); 
        printf("\nenter the roll number : ");
        scanf("%d",&roll);
        createstruct(array, roll);
        current = createstruct(array, roll);
        /*
        if(first == NULL) {
            first = &current;
            current->next = &middle;
            current = NULL; 
            //continue;
        }else {
            middle = &current;
            current->next = NULL;
        }*/
        
    } printf("%s\n",current->name); 
    printf("%d",current->roll);
    /*
    struct node *n = first;
    while (n != NULL) {
        printf("\n%s",n->name);
        printf("\n%d",n->roll);
        n = n->next;
    }*/
}