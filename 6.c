#include <stdio.h>

float a;
void metreandmile() 
{ 
    int b;
    printf("\n\nenter 0 to convert in Metres to Kilometres :\n");
    printf("enter 1 to convert in Kilometre to Metres  :\n");
    printf("enter 2 to convert in Kilometre to Miles   :\n");
    printf("enter 3 to convert in Miles to Kilometre   :\n");
    printf("\nenter 4 to return :\n");
    printf("\nenter number :");
    scanf("%d",&b);
    switch(b)
    {
        case 0:
            printf("\nEnter value you want to convert : ");
            scanf("%f",&a);
            printf("\n%0.4f Metres = %0.4f Kilometres\n\n",a,a/1000);
            break;

        case 1:
            printf("\nEnter value you want to convert : ");
            scanf("%f",&a);
            printf("\n%0.4f Kilometres = %0.4f Metres\n\n",a,a*1000);
            break;
                
        case 2:
            printf("\nEnter value you want to convert : ");
            scanf("%f",&a);
            printf("\n%0.4f Kilometres = %f Miles\n\n",a,a*0.62137);
            break;

        case 3:
            printf("\nEnter value you want to convert : ");
            scanf("%f",&a);
            printf("\n%0.4f Miles = %0.4f Kilometres\n\n",a,a/0.62137);
            break;
        default:
            break;

    }
    
}


void inchtofeetandcmmm()
{
    int x;
    printf("\n\nenter 0 to convert Inches to Feet  :\n");
    printf("enter 1 to convert Feet to Inches :\n");
    printf("enter 2 to convert Inches to Centimetre :\n");
    printf("enter 3 to convert Centimetre to Inches :\n");
    printf("enter 4 to convert Centimetre to Milimetre :\n");
    printf("enter 5 to convert Milimetre to centimetre :\n");
    printf("\nenter 6 to return :\n");
    printf("\nenter number :");
    scanf("%d",&x);
    switch(x)
    {
        case 0:
            printf("\nEnter value you want to convert : ");
            scanf("%f",&a);
            printf("\n%0.4f Inches = %0.4f Feet\n\n",a,a/12);
            break;
        case 1:
            printf("\nEnter value you want to convert : ");
            scanf("%f",&a);
            printf("\n%0.4f Feet = %0.4f Inches\n\n",a,a*12);
            break;
        case 2:
            printf("\nEnter value you want to convert : ");
            scanf("%f",&a);
            printf("\n%0.4f Inches = %0.4f centimetres\n\n",a,a*2.54);
            break;
        case 3:
            printf("\nEnter value you want to convert : ");
            scanf("%f",&a);
            printf("\n%0.4f Centimetres = %0.4f Inches\n\n",a,a/2.54);
            break;
        case 4:
            printf("\nEnter value you want to convert : ");
            scanf("%f",&a);
            printf("\n%0.4f Centimetre = %0.4f Milimetre\n\n",a,a/0.1);
            break;
        case 5:
            printf("\nEnter value you want to convert : ");
            scanf("%f",&a);
            printf("\n%0.4f Milimetres = %0.4f Centimetre\n\n",a,a*0.1);
            break; 
        default:
            break;               
    }
    
}


int main()
{
    int i=1;
    while(i<=5)
    {
        hnbhai:
        hngbhai:
        printf("\n\nhello! THIS IS AN CONVERTER \n\n");
        printf(">> enter 0 to perform conversions between \"Mile,Kilometre,Metre\"\n");
        printf(">> enter 1 to perform conversions betweem \"Inches,Feet,Centimetre,Milimetre\"\n");
        int k;
        printf("\nenter number 0 or 1 : ");
        scanf("%d",&k);
        if(k==0)
        {
            metreandmile();
            int e;
            printf("\nenter 0 if u want to go on main page : \n\nenter 1 if u want to do more conversions :\n");
            printf("\nenter number : ");
            scanf("%d",&e);
            if(e==1)
            {
                metreandmile();
            } 
            else 
            {
                goto hnbhai;
            }
        }
        else if(k==1)
        {
            inchtofeetandcmmm();
            int w;
            printf("enter 0 if u want to go on main page : \nenter 1 if u want to do more conversions :\n");
            printf("enter number :");
            scanf("%d",&w);
            if(w==1)
            {
                inchtofeetandcmmm();
            } 
            else 
            {
                goto hngbhai;
            }
        }
        i--;
    }    
    return 0;
}