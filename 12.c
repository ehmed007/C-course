#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int rows,columns;
    printf("enter numbers of rows :");
    scanf("%d",&rows);
    printf("enter numbers of columns :");
    scanf("%d",&columns);
    int matrix[rows][columns];

    //for input values
    for(int i=0;i<rows;i++)
    { 
        for(int j=0;j<columns;j++) 
        {
            printf("enter %d element for %d row : ",j,i);
            scanf("%d",&matrix[i][j]);
        }
    }
    
    
    //for printing
    printf("\n");
    for(int i=0;i<rows;i++)
    {
        printf("\n|\t");
        for(int j=0;j<columns;j++)
        {
            printf("%d\t",matrix[i][j]);
            if(j+1<columns){
            printf("\t");
            }
        }
        printf("|");
    }

    printf("\n\n");
    return EXIT_SUCCESS;
}