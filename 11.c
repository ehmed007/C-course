#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void Fibonacci(void);

int u;
int l=0;
int main()
{
    do
    {
        Fibonacci();    
        printf("\nPress 0 to exit :\n");
        printf("Press 1 for again/continue :\n");
        printf("\nEnter number :");
        scanf("%d",&u);
        system("CLS");
        if(u==0)
        {
            exit(0);
        }
        l--;
    }
    while(l<=2);
    return 0;
}



int a, b, c, d;
void Fibonacci(void)
{
    printf("\nEnter number of which u want a \"Fibonacci\" number :");
    scanf("%d",&d);
    a = 0;
    b = 1;
        if(d==0)
        {
            printf("\nFibonacci number for value \"%d\" is \"%d\".\n",d,a);
        }
        else if(d==1)
        {
            printf("\nFibonacci number for value \"%d\" is \"%d\".\n",d,b);
        }
        else
        {
            ;
        }
            for(int i=2; i<=d; i++)
            {
                c=a+b;
                a=b;
                b=c;
                if(i==d)
                {
                    printf("\nFibonacci number for value \"%d\" is \"%d\".\n",d,c);
                }
                else
                {
                    continue;
                } 
            }
           
} 