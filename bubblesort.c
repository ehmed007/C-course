#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void bubblesort(int size, int arr[size]) {
    bool flag = false;
    int i; 
    for (i=0; i<size-1; i++) {
        flag = false;
        for (int j=0; j<size-1; j++) {
            if (arr[j] > arr[j+1]) {
                flag = true;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp; 
            }
        }
        if (flag == false) {
                break;
        } 
    }
}

int main() {
    int array[10] = {5,4,1,10,-8,-9,2,5,6,7};
    for (int i=0; i<10; i++) {
        printf("%d\t",array[i]);
    }
    printf("\n\n");
    bubblesort(10, array);
    for (int i=0; i<10; i++) {
        printf("%d\t",array[i]);
    }
}