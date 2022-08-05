
//for numbers

#include <stdio.h>
#include <stdlib.h> 

//function for array reversal
void reverse(int array[],int n) {
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
    int array[10]={200,5,3,5,800,3,6,900,9,32};
    reverse(array,10);
    return 0;
}

//for charactersss
/*
#include <stdio.h>
#include <stdlib.h> 

//function for array reversal
void reverse(char array[]) {
    int i=0;
    int j=5-1;
    while(i<=j) {
        char temp;
        temp = array[i];
        array[i]=array[j];
        array[j]=temp;
        i++;
        j--;
    }
    for (int i=0 ; i<5 ; i++) {
        printf("%c\t",array[i]);
    }
}


int main() {
    char array[5]={'T','I','C','U','P'};
    reverse(array);
    return 0;
}*/