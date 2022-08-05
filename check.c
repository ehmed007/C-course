/*#include<stdio.h>
// The following function returns the frequency of the input element x
// in the given array, whose size is arraySize.
int frequency(int x, int array[], int arraySize) {
//add your code below
    int count = 0;
    for (int i=0; i<arraySize; i++) {
        if (x == array[i]) {
            count++;
        }
    }
    return count;
}
int main() {
    int loop, x, array[10];
    for (loop = 0; loop < 10; loop ++) {
        printf("\n Value for array[%d]=", loop);
        scanf("%d", &array[loop]);
    }
    printf("\nEnter element whose frequency you want to find x=");
    scanf("%d", &x);

    //calling function frequency
    int freq = frequency(x, array, 10);

    //Printing output
    printf("frequency of element x=%d is %d", x, freq);
    return 0;
}/*

#include <stdio.h>
#include <string.h>

int main() {
    char arr[10];
    char num;
    printf("enter any number : ");
    scanf("%d",&num);
    char a;
    char b;
    int i;
    for (i=0; num>0; i++) {
        b = num/2;
        a = num%2;
        arr[i] = a;
        num = b;
    }
    /*
    for (int j=0; j<=i; j++) {
        printf("%d",arr[j]);
    }*/
    //puts(arr);
//}
/*
#include <stdio.h>

int main() {
    int array[10];
    for (int i=0; i<10; i++) {
        printf("\nenter number of %d :",i);
        scanf("%d",&array[i]);
    }
    int check = array[0];
    int check1 = array[0];
    for (int i=0; i<10; i++) {
        if (array[i] > check) {
            check = array[i];
        }
        if (check1 < check && check1 < array[i]) {
            check1 = array[i];
        }
    }
    printf("%d",check1);
}

#include <stdio.h>
#include <stdlib.h>

struct ahmed {
    int i;
};

int main() {
    struct ahmed *arr = (struct ahmed*)malloc(10*sizeof(struct ahmed));
    (arr+2)->i = 8;
    printf("value %d",(arr+2)->i);
    struct ahmed node;
    node.i = 9;  
    struct ahmed *elem = NULL;
    elem = &node;
    printf("%d",elem->i);
    return 0;
}*/
#include <math.h>
#include <stdio.h>

void insertionSort(int arr[], int n) { 
    int i, key, j; 
    for (i = 1; i < n; i++) { 
        key = arr[i]; 
        j = i - 1; 
        while (j >= 0 && arr[j] > key) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 
} 

void printArray(int arr[], int n) { 
    int i; 
    for (i = 0; i < n; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
}

int main() { 
    int arr[] = {12, 11, 13, 5, 6 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    insertionSort(arr, n);
    printArray(arr, n); 
    return 0; 
}