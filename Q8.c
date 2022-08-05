#include <stdio.h>
#include <stdlib.h>

void reverseArray(int size, int array[size]) {
    for (int i = 0; i < size/2; i++) {
        int temp;
        temp = array[i];
        array[i] = array[size-1-i];
        array[size-1-i] = temp;
    }
}

int main() {
    int array[8] = {1,9,0,5,3,5,7,9};
    for (int i = 0; i < 8; i++) {
        printf("%d\t",array[i]);
    }
    printf("\n\n");
    reverseArray(8, array);
    for (int i = 0; i < 8; i++) {
        printf("%d\t",array[i]);
    }
    return 0;
}