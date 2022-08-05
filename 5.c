#include <stdio.h>

long long moves(long long x)
{
    if (x<=0) {
        return 0;
    } else {
        return ((2*moves(x-1))+1);
    }
}

int main()
{
    long long i=1;
    while (i<=5)
    {
        long long a;
        printf("\n\n Enter a number of DISKS and get the number of moves of \"TOWER OF HANOI\" :");
        scanf("%lld",&a);
        moves(a);
        printf("\n\nNumber of moves for %lld DISKS is : %lld",a,moves(a));
        i--;
    } 
    return 0;
}