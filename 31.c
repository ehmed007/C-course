#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

//int cal(int a, int b);

struct bill {
    char name[30];
    int units;
    int rate;
};

int cal(struct bill ); 

int main() {
    while (1) {
    struct bill t; 
    printf("enter the name of customer : ");
    gets(t.name);
    printf("enter number of units consumes : ");
    scanf("%d",&t.units);
    printf("enter the units rate : ");
    scanf("%d",&t.rate);
    int z = cal(t);
    printf("name : %s\n\nbill : %d\n\n\n",t.name,cal(t));
    //fflush(stdin);
    getchar();
    }
    return 0;
}
int cal(struct bill t) {
    int c;
    c = t.units * t.rate;
    return c; 
}

