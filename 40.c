#include <stdio.h>
#include <stdlib.h>


int getindex(int i, int array[], int x) {
    for (int j=0 ; j<=i; j++) {
        if(x<=array[j]) {
            return j;
        }
    } return i;
}

void shiftright(int index, int array[], int i) {
    for (int k=i; k>=index; k--) {
        array[k+1]=array[k];
    }
}

void printarray(int array[], int size) {
    for(int r=0; r<=size; r++) {
        printf("%d\t",array[r]);
    }
}

int main() {
    int size;
    int x;
    printf("input size of array :");
    scanf("%d",&size);
    int array[size];
    for (int i=0; i<=size; i++) {
        printf("enter value for %d index = ",i);
        scanf("%d",&x);
        int index = getindex(i,array,x);
        shiftright(index, array, i);
        array[index]=x;
    }
    printarray(array, size);
    return 0;
}
