#include <stdio.h>
#include <stdlib.h>


int binarysearch(int x, int array[], int size) {
    int start=0;
    int end= size;
    while (start <= end) {
        int mid;
        mid = (start + end);
        mid = mid/2;
        if (array[mid] == x) {
            return mid;
        } else if (x > array[mid]) {
            start = mid+1;
        } else if (x < array[mid]) {    
            end = mid-1;
        }
    }
}


int main() {
    int size;
    printf("enter the size of array = ");
    scanf("%d",&size);
    int array[size];
    printf("enter sorted numbers :\n");
    for (int i=0; i <= size; i++) {
        printf("enter value for %d index = ",i);
        scanf("%d",&array[i]);
        if(array[i] < array[i-1]){
            printf("wrong input");
            exit(0);
        }
    }
    int x;
    printf("enter the number u want to find = ");
    scanf("%d",&x);
    int index = binarysearch(x, array, size);
    printf("index of %d is %d",x,index);
    return 0;
}