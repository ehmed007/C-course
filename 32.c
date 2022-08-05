#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    int j=0; 
    char *a;
    while (1) {
    int n;
    printf("\nenter the length of ID : ");
    scanf("%d",&n);
    if (n>j||n<j) {
        a = (char*)realloc(a,n*sizeof(char));
        printf("please enter the your ID :\t");
        scanf("%s",a);
        printf("Your ID is : ");
        printf("%s",a);
    } else {
        a = (char*)malloc(n*sizeof(char));
        printf("please enter the your ID :\t");
        scanf("%s",a);
        printf("Your ID is : ");
        printf("%s",a);
        }
    } free(a);
      return 0;
}