#include <stdio.h>
#include <string.h>

int main() {
    char name1[10];
    char name2[10];
    char name3[10];
    char name4[10]="hnbhai";
    printf("enter name1 : ");
    gets(name1);
    printf("enter name2 : ");
    gets(name2);
    printf("enter name3 : ");
    gets(name3);
    printf("full name : %s\n",strcat(name1,name2));
    //************ real  command for catination char *strcat(char *destination, const char *source) 
    puts(strcat(name1,name2));
    puts(name1);//don't get confused just read again real command for strcat()
    //
    printf("%d\n",strlen(name3));//strlen() for getting length of a string 
    //
    printf("%s\n",strrev(name4));//strrev() for getting reverse of a string
    //
    printf("%s\n",strcpy(name1,name2));//strcpy() to copy
    //
    char a[10]="ahmed";
    char b[10]="ahmed";
    printf("%d\n",strcmp(a,b));//strcmp() for camparing of strings
    return 0;

}