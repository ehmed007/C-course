#include <stdio.h>

void marks();

int main()
{
    marks();
    return 0;
}
int a;//global variables
float sumofall;
int big;
int hnbhai;
int gbhai = 0;
int low;
void marks()
{
    printf("\nEnter number of students : ");
    scanf("%d",&a);
    int bhai[a];   
    
        for(int i=0;i!=a;i++)  
            {
                printf("Enter marks for %d rollno : ",i);
                scanf("%d",&bhai[i]);
                sumofall = sumofall + bhai[i];

                //gbhai = bhai[0];
                if(gbhai>=bhai[i])
                {
                    big = bhai[i];
                    hnbhai = i;
                    goto end;
                    
                }
                else if(gbhai<=bhai[i])
                {
                    gbhai=bhai[i];
                    low = i;
                    goto end;
                }
                else 
                {
                    end: 
                    continue;
                }
            }
            
        for(int i=0;i!=a;i++)
            {
                printf("\nRollno. %d has %d marks.\n",i,bhai[i]);
            }
            
    printf("\nAverage marks of students is = \"%0.4f\"\n\n",sumofall/a);
    printf("\nHighest marks is : \"%d\" of rollno \"%d\".\n\n",big,hnbhai);
    printf("\nLowest marks is : \"%d\" of rollno \"%d\".\n\n",gbhai,low);
}
