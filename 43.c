#include <stdio.h>
#include <stdlib.h>

//for prime numbers
int main() {
    int val;
    int check = 0;
    printf("enter any number : ");
    scanf("%d",&val);
    for (int i=2; i < val; i++) {
        if ( val%i == 0) {
            printf("number is not a prime %d",val);
            check = 1;
            break;
        }
    }
    if (check == 0) {
        printf("number is prime : %d",val);
    }
    return 0;
}