#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct studentRecord {
    char name[50];
    int roll;
    float age;
    struct studentRecord *next;
    struct studentRecord *back;
};
 
void change() {
}

struct studentRecord *createStruct(char name[], int roll, float age) {
    struct studentRecord *rec = (struct studentRecord*)malloc(sizeof(struct studentRecord));
    strcpy(rec->name, name);
    rec->roll = roll;
    rec->age = age;
    return rec;
}
 
int main() {
    char name[70];
    int roll;
    float age;
    int count;
    printf("\nEnter number of records you wanna enter : ");
    scanf("%d",&count);
    struct studentRecord *prv= NULL;
    struct studentRecord *first= NULL;
 
for (int i = 0; i<count; i++) {
    printf("\n\nPLease enter %d RECORD :\n\n", i+1);
    printf("Please enter student %d NAME : ",i+1);
    scanf("%s",name);
    printf("Please enter student %d ROLL : ",i+1);
    scanf("%d",&roll);
    printf("Please enter student %d AGE  : ",i+1);
    scanf("%f",&age);
struct studentRecord *current = createStruct(name, roll, age); 
printf("\n add=%p", current);
if (first == NULL) {
    first = current;
    first->back = NULL;
    prv = current;
    continue;
}
prv->back = current;
prv->next = current;
prv = current;
current->next = NULL;
}
printf("\n\nStudent RECORDS :\n\n");
struct studentRecord *current = first;
    while (current != NULL) {
        printf("\nStudent  NAME : %s",current->name);
        printf("\nStudent  ROLL : %d",current->roll);
        printf("\nStudent  AGE  : %.2f\n\n",current->age);
        current = current->back;
}
    return 0;
}