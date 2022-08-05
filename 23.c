#include <stdio.h>
#include <stdlib.h> 

//function for array reversal
void reverse(int *array,int n) {
    int i=0;
    int j=n-1;
    while(i<=j) {
        int temp;
        temp = array[i];
        array[i]=array[j];
        array[j]=temp;
        i++;
        j--;
    }
    for (int i=0 ; i<=9 ; i++) {
        printf("%d\t",array[i]);
    }
}


int main() {
    int array[10]={200,20,3,56,100,3,6,7,9,32};
    reverse(array,10);
    return 0;
}