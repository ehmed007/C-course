#include <stdio.h>
#include <stdlib.h>

//first method to pass array

void check1(int array[]) {
    printf ("\nvalues : \n");
    array[5]=600;//*******point to note : it will change the actual value(in main function) in the array 
    for (int i=0; i<=9; i++) {
        printf ("%d\t",array[i]);
    } printf ("\n\n");
}

//second method to pass array

void check(int *array) {
    for (int i=0; i<=9 ; i++) {
        printf ("%d\t",*(array+i));//array[i]
    }
}

int main() {
    int array[]={3,3,5,652,5,25,2353,25,325,2};
    check1(array);
    check(array);
    return 0;
}

