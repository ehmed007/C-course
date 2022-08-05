#include <stdio.h>

int main() {
    int length;
    printf("Enter the )length of an array : ");
    scanf("%d",&length);
    int array[length];
    for (int i=0; i<length; i++) {
        printf("enter value for %d index of array :",i);
        scanf("%d",&array[i]);
    }
    float add;
    for (int c=0; c<length; c++) {
        add=add+array[c];
    }
    printf("MEAN of array %.1f",add/length);
return 0;
}