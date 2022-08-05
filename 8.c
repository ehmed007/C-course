//header files
#include <stdio.h>

int findsmall(int x, int y, int z, int p);//declaration

int findsmall(int x, int y, int z, int p)//definition
{
    if(x<y && x<z && x<p)
    {
        return x;
    }
    else if (y<x && y<z && y<p)
    {
        return y;
    }
    else if (z<x && z<y && z<p)
    {
        return z;
    }
    else
    {
        return p;
    }
} 

int main()
{
    int a,b,c,d;
    printf("\nPlease enter 1st number  : ");
    scanf("%d",&a);//taking input from user
    printf("\nPlease enter 2nd number  : ");
    scanf("%d",&b);
    printf("\nPlease enter 3rd number  : ");
    scanf("%d",&c);
    printf("\nPlease enter 4rth number  : ");
    scanf("%d",&d);
    printf("\nSmallest = %d\n\n",findsmall(a,b,c,d));
    return 0;
} 