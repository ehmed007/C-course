#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    while(1)
    {
        char a[100];
        int b;
        char c[100]; 
        printf("\nEnter name :");
        scanf("%s",&a);
        printf("Enter your age :");
        scanf("%d",&b);
        printf("Enter your hair colour :");
        scanf("%s",&c);
        system("CLS\n\n");
        printf("\n\nName : %s\nAge : %d\nHair colour : %s\n\n\n",a,b,c);
        char x[100];
        printf("Do you want to continue [Yes/No]:\n");
        scanf("%s",&x);
        if(strcmp(x, "yes") == 0)
            {
                system("CLS");
                continue;
            }
        else
            {
                system("CLS");
                break;
            }
        ;
    }
    return 0;
}