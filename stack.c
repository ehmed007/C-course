#include <stdio.h>

int stack[100],x=0,indx=0;
void push() {
    printf("enter value u want to push :");
    scanf("%d",&x);
    stack[indx] = x;
    indx++;
}
void pop() {
    printf("Poped element %d = ",stack[indx]);
    indx--;
}

void display() {
    for (int i=indx; i>=0; i--) {
        printf("%d",stack[i]);
    }
}

int main() {
    int opt;
    while(opt != 4) {
        printf("\n\npress 1 for push :");
        printf("\npress 2 for pop :");
        printf("\npress 3 for display :");
        printf("\npress 4 for exit :");
        printf("\n\npress choice :");
        scanf("%d",&opt);
        switch (opt) {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;    
        default:
            printf("\nwrong choice\n");
            break;
        }
    }
    return 0;
}