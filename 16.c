#include <stdio.h> 
#include <stdlib.h>

//get input two arrays of flexible length

//sort both 

//and then merge

// for input 

void input(int list1[],int list2[],int sizeoflist1,int sizeoflist2)
{ 
    printf("\nhow many numbers u want to enter for 1st list : ");
    scanf("%d",&sizeoflist1);
    int list1[sizeoflist1];

    printf("\nhow many numbers u want to enter for 2nd list : ");
    scanf("%d",&sizeoflist2);
    int list2[sizeoflist2];

    printf("enter values for 1st list : \n\n");
    for(int i=0;i<sizeoflist1;i++)
    {
        printf("\nenter value for index %d  ",i);
        scanf("%d",&list1[i]);
    }    
    printf("enter values for 2st list : \n\n");
    for(int i=0;i<sizeoflist2;i++)
    {
        printf("\nenter value for index %d  ",i);
        scanf("%d",&list2[i]);
    }    
}


int sortarray1(int list1[],int sizeoflist1)
{
    for(int i=0;i<sizeoflist1;i++)
    {
        for(int j=i+1;j<sizeoflist1;j++)
        {
            if(list1[i]>list1[j])
            {
                int temp;
                temp=list1[i];
                list1[i]=list1[j];
                list1[j]=temp;
            }
        }
    }
    return list1[];
}

int sortarray2(int list2[],int sizeoflist2)
{
    for(int i=0;i<sizeoflist2;i++)
    {
        for(int j=i+1;j<sizeoflist2;j++)
        {
            if(list2[i]>list2[j])
            {
                int temp;
                temp=list2[i];
                list2[i]=list2[j];
                list2[j]=temp;
            }
        }
    }
    return list2[];
}



int main()
{
    int list[5]={8,43,56,6,25};
    sortarray1(list,5); 
    return 0;
}
