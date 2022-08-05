#include <stdio.h>
#include <stdlib.h>

int array[10];

int main() {
    array[0]=10;
    array[1]=20;
    array[2]=90;
    
    int *ptr = &array[0];/*
    for (int i=0; i<15; i++){
        printf("\nvalue in array at %d =  %d",i, array[i]);
    }*/
    int k = 0;
    while(*(ptr) != 0) {
        printf("\n\nvalue %d ", *(ptr));
        ptr++;
        //k++;
    }
    return EXIT_SUCCESS;
}