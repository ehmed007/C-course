/*#include<stdio.h>

int main(){
    char name[100];
    int rollno;
    float marks;
    FILE *ah=fopen ("C:\\users\\Ustaaad\\Desktop\\quiz.txt","w");
    printf("\n\n");
    for(int i=1;i<3;i++){
        fgets(name,100,stdin);
        fputs(name,ah);
        scanf("%d",&rollno);
        scanf("%f",&marks);
        fprintf(ah,"%d,%f",rollno,marks);
        fprintf(ah,"\n");
        fflush(stdin);    
    }
    fclose(ah);
    return 0;
}*/
///*
#include <stdio.h>

int main(){
    char name[400];
    int rollno;
    float marks;
    FILE *st= fopen("C:\\users\\Ustaaad\\Desktop\\test.txt","w");
    printf("\n\n");
    for(int i=1;i<3;i++){
        printf("Enter your name:");
        fgets(name,400,stdin);
        //scanf("%s",&name);
        fputs(name,st);
        //fprintf(st,"%s",name);
        printf("Enter your rollno:");
        scanf("%d",&rollno);
        printf("Enter your marks:");
        scanf("%f",&marks);
        fprintf(st," rollno is:%d, marks are: %f",rollno,marks);
        fprintf(st,"\n");
        //printf("\n");
        fflush(stdin);
    }
    fclose(st);
    printf("\n");
    return 0;

}
//*/