#include <stdio.h> 
#include <stdlib.h>


struct record {
    int a;
    char array[10];
};
/*
void foo(yes *ahmed) {
    while (1) {
    printf("\nenter value : ");
    scanf("%d",&ahmed->a);
    printf("\nenter name : ");
    scanf("%s",ahmed->array);
    printf("\n\nyour value  : %d\n",ahmed->a);
    printf("your name : %s",ahmed->array); 
    }
}*/

int main() {
    struct record *ahmed;
    ahmed =(struct record *) malloc(3*sizeof(struct record));
    //foo(ahmed);
    for (int i = 0; i <= 2; i++) {
        printf("\nenter value : ");
        scanf("%d",&(ahmed+i)->a);
        printf("\nenter name : ");
        scanf("%s",(ahmed+i)->array);
    }
    for (int k = 0; k <= 2; k++) {
        printf("\n\nyour value  : %d\n",(ahmed+k)->a);
        printf("your name : %s",(ahmed+k)->array); 
    }
    return 0;
}