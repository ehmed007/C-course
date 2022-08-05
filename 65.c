#include <stdio.h>
#include <stdlib.h>

 
int main() {
    for (int i = 0; i < 10; i++) {
        for (int k = 0; k < 10-i; k++) {
            printf(" ");
        }
        for (int j = 0; j < i*2-1; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 10; i > 0; i--) {
        for (int k = 0; k < 10-i; k++) {
            printf(" ");
        }
        for (int j = 0; j < i*2-1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;    
}