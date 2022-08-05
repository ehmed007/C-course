#include <stdio.h>
#include <string.h>
     
struct strec {
    char name[50];
    int age;
    double rollno;
};
//struct strec a;

void enterdata(struct strec *a) {
    printf("Enter name of student\n");
    //scanf("%s",a->name);   
    gets(a->name);
    printf("Enter age of student\n");
    scanf("%d",&a->age);   
    printf("Enter rollno of student\n");
    scanf("%d",&a->rollno);
}

void printdata(struct strec a) {       
    printf("Name of stduent is : %s\n",a.name);
    printf("Age of stduent is %d\n",a.age);
    printf("Roll number of stduent is %d\n",a.rollno);
}
     
int main(){     
    struct strec a;
    enterdata(&a);
    printdata(a);
    return 0;
}
/*
#include<stdio.h>

int main(){
      for(int i=2; i<=10; i++){
             printf ("Table of %d is :\n",i);
            for(int j=0; j<=10; j++){
            printf("%d x %d =%d \n",i,j,i*j);
            }
    printf("\n\n");
      }

return 0;

}
*/