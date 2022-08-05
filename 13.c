#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("How many numbers want to sort \?\n");
    printf("enter : ");
    scanf("%d",&a);
    int array[a];
    for(int i=0;i<a;i++)
    { 
        printf("Enter %d number :",i);
        scanf("%d",&array[i]);
    }
    for(int i=0;i<a;i++)
    { 
        for(int j=i+1;j<a;j++)
        {
            if(array[j]<array[i])
            {
                int temp;
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    for(int i=0;i<a;i++)
    {
        printf("%d,",array[i]);
    }
    printf("\n");
    return EXIT_SUCCESS;
}