#include <stdio.h>
    
int main() {
    printf("iterative case :\n");
    int array[10] = {100,4,1,10,-8,-9,2,5,6,7};
    for (int i = 0; i < 10; i++) {
        printf("%d\t",array[i]);
    }
    for (int i = 0; i < 10; i++) {
        int min = array[i];
        int j;
        for (j=i+1; j < 10; j++) {
            if (array[j] < min) {
                min = array[j];
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\t",array[i]);
    }
}   