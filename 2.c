//using FORLOOP
#include <stdio.h>

int main()
{
    int a,i;
    printf("\"Enter a numeber for table\" :");
    scanf("%d",&a);
    for(i=1;i<=10;i++)
    {
        printf("%d X %d = %d\n",a,i,a*i);
    }
    return 0;    
}
/* using WHILELOOP
#include <stdio.h>

int main()
{
    int a,i;
    printf("Enter a numeber for table : ");
    scanf("%d",&a);
    i=1;
    while(i<=10)
    {
        printf("%d * %d = %d\n",a,i,a*i);
        i++;    
    }
    return 0;    
}
*/