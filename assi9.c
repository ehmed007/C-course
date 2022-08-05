#include <stdio.h>
#include <stdio.h>

int selectionsort(int array[], int size) { 
    for (int i = 0; i < 10; i++) {
        int min = array[i];
        int j;
        for (j=i+1; j < 10; j++) {
            if (array[j] < min) {
                //printf("ahmed\n");
                min = array[j];
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

int main() {
    int array[10] = {3,4,1,-10,-8,9,2,5,6,7};
    return 0;
}