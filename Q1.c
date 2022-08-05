#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


void printMostfreq(int size, int arr[size]) {
    int point = 0;
    int freq = 0;
    int check = 0;
    int max = 0;
    int assisst;
    int c;
    for (int i = 0; i<size; i++) {
        assisst = arr[i];
        for (int j=i; j<size; j++) {
            if (assisst == arr[j]) {
                freq++;
                point++;
            }
        }
        if (point > check) {
            check = point;
            //printf("value %d",arr[i]);
            c = arr[i];
        }
        if (freq > max) {
            max = freq;
        }
        point = 0;
        freq = 0;
    }
    printf("value %d",c);
    printf("\nmax : %d",max);
}


int main() {
    int array[6] = {3,5,6,5,3,6};
    printMostfreq(6, array);
    return 0;   
}