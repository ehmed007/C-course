#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    int n;
    printf("\n\nenter numbers of lines for printing stars in triangle : \n\n");
    scanf("%d",&n);
    //printing star in triangle
    for (int i = 0; i <= n; i++ ) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    //printing star in reverse triangle
    for (int i = 0; i <= n; i++ ) {
        for (int j = n; j >= i; j--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}