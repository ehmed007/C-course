#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main()
{
    int array[3];
    for(int i=0;i<3;i++)
    {
        printf("enter %d number :",i+1);
        scanf("%d",&array[i]);
    }
    int i=1;
    while(i<3)
    {
       if(array[0]<array[i])
       {
           array[0]=array[i];
       }
       i++;
    }
    printf("\nlargest number is %d\n\n",array[0]);
    //getch();
    //system("CLS");
    return EXIT_SUCCESS;
}  