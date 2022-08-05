#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 6;
    int *b = &a;
    printf("address of a in memory : %x\n\n",&b);
    printf("%d\n\n",*b);
    int **c = &b;
    printf("%p\n\n",*c);
    int u=7;
    int *i = &u;
    printf("%d\n\n",*i);
    return EXIT_SUCCESS;
}