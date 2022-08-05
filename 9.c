#include <stdio.h>

int main()
{
    int rollno[5] = {45,43,42,25,1};
    printf("%d\n",*(rollno+2));
    printf("%d",rollno[2]);
    /*
    for(int i=0 ; i<5 ; i++)
    {
        printf("enter %d roll  number : ",i);
        scanf("%d",&rollno[i]);
    }
    for(int i=0 ; i<5 ; i++)
    {
        printf("random rollno for rollno %d is %d\n",i,rollno[i]);
    }*/
    return 0;
} 