#include <stdio.h>
#include <stdlib.h>

int main()
{
    //pointer arthmatics 
    int b = 5;
    int *a = &b;
    printf("%d\n\n",a);
    a++;//it will not add the 1 it will add the size of integer
    a++;
    printf("%d\n\n",a);
    a--;
    printf("%d\n\n",a);
    return EXIT_SUCCESS;
} 