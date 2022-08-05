#include <stdio.h>

int main()
{
    int a;
        printf("enter any number : ");
        scanf("%d",&a);
    while(a != 1)
    { 
        if(a%2==0)
        {
            printf("\n%d--->\n",a/2);
            a=a/2;
        }
        else
        {
            printf("\n%d|\n",((3*a)+1));
            a=3*a+1;
        }
    }
    return 0;
}
