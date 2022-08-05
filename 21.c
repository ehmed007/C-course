#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main() {
    char name[10]={'a','h','m','e','d','\0'};
    char name2[50]="ahmed";//no need of null character
    char forinput[100];
    gets(forinput);//to get input from user for string
    /*int i=1;
    while (name[i]!='\0')
    {
        printf("%c",name[i]);
        i++;
    }*/
    for (int i=0; name[i]!='\0';i++) {
        printf("%c",name[i]);
    }
    //exit(0);
    printf("\n%s\n",name);
    puts(name);//work same as printf() but only for strings
    puts(forinput);
    return EXIT_SUCCESS;
}