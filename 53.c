#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main(){
    char name [500];
    int roll;
    float marks;
    FILE *fp = fopen ("C:\\users\\Ustaaad\\Desktop\\text.txt", "w");
    for (int i = 2 ; i <= 3; i++) {
        //open the file
        // write data in file
        printf("enter ur name :");
        fgets(name , 500 , stdin);
        fputs(name , fp);
        printf("enter ur roll :");
        scanf ("%d" , &roll);
        printf("enter ur marks :");
        scanf ("%f" , &marks);
        fprintf(fp , "%d, %f", roll, marks);
        fprintf(fp , "\n");
        fflush(stdin);
    }
    fclose(fp);
    return 0;
}
/*
int main() {
    FILE *ptr = NULL;
    char a[100];
    ptr = fopen("file.txt","r+");
    //fputs(a,ptr);
    //fgets(ptr,"%s",a);
    fgets(a,100,ptr);
    printf("%s",a);
    fclose(ptr);
    return 0; 
}*/