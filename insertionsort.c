#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void forinput(int array[],int index);

void sorting(int array[],int index);

void forprinting(int array[],int index);


int main() {
    int index;
    printf("\n\nEnter the range of list of numbers :");
    scanf("%d",&index);
    printf("\n\nPlease input only positve numbers. \n\n");
    int array[index];
    //Taking input from user values for array
    forinput(array,index);
    //for sorting
    sorting(array, index);
    return EXIT_SUCCESS;
}


void forinput(int array[],int index) {
    for(int i=0;i<index;i++) {
        printf("Enter value for index %d :\t",i);
        scanf("%d",&array[i]);
        if(array[i]<0) {
            printf("Wrong! input is invalid \nOnly valid for positive numbers\n");
            exit(0);
            printf("\n");
        }
    }
}


void sorting(int array[],int index)
{
    int i=0;
    int j=1;
    while(j<index) {
        if(array[i]>array[j]) {
            for(array[j];array[j]<array[j-1];j--) {
                //shifting numbers
                int temp;
                temp=array[j];
                array[j]=array[j-1];
                array[j-1]=temp;
            }
        }
        else {
            for(array[j];array[j]<array[j-1];j--) {
                //shifting numbers
                int temp;
                temp=array[j];
                array[j]=array[j-1];
                array[j-1]=temp;
            }
        }
        j++;
    }
    forprinting(array,index);
}



void forprinting(int array[],int index) {
    printf("\n\n***********************************By using INSERTION SORT***********************************\n\n");
    for(int i=0;i<index;i++) {
        printf("%d\t",array[i]);
    }
    printf("\n\n");
}


