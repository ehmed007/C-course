

// deferencing.......kamal

#include <stdio.h>
#include <stdlib.h>

void check(int *a ,int *b) {
    int m;
    int n=90;
    m = *a + *b; 
    *a = n;
    *b = 10;
    printf("a = %d and b = %d\n",m,*b);
    printf("a = %d and b = %d\n",a,b);

}

int main() {
    int a=20;
    int b=20;
    check(&a,&b);
    printf("hana = %d and b = %d\n",a,b);
    return 0;

}