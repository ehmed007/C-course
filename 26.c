#include <stdio.h>
#include <string.h>

void parser(char string[], int *index) {
    int in = 0;
    int b = 0;
    for (int i = 0; i <= *index; i++) {
        if(string[i] == '<') {
            in = 1;
            continue;
        } else if (string[i] == '>') {
            in = 0;
            continue;
        } if (in == 0) {
            string[b] = string[i];
            b++;
        }
    } 

    //string[b]='\0';
    while (string[0]==' ') {
        for (int i=0 ; i <= b ; i++) {
            string[i]=string[i+1];
        }
    }
    b = strlen(string); 
    while (string[b - 1]==' ') {
        string[b - 1]='\0';
        b--;
    }
}


int main() {
    char string[100];
    printf("\n\nenter the HTML FORMAT to get without headers :\n");
    gets(string);
    int a = strlen(string);
    //printf("%d",a);
    parser(string,&a);
    //puts(string);
    printf("~~~~~%s~~~~~",string);

    return 0;
}
/*
void parser(char string[],int a) {
    int i=0;
    while (i<=a) {
        if (string[i]=='<') {
            int j=i+1;
            while (string[j]!='>') {
                //string[i]=string[j];
                //i=j;
                //i++;
                j++;
            }
            i=j+1;
        }if (string[i]!='<'){
            printf("%c",string[i]);
        }
    i++;
    }
}*/