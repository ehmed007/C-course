#include <stdio.h>

int main() {
    char a[100];
    int b;
    FILE * ptr = NULL;
    ptr = fopen("file.txt","r");
    fgets(a,100,ptr);
    fscanf(ptr,"%d",&b);
    //printf("string stored in file is that : \n %s",a);
    //printf("number : %d",b);
    fclose(ptr);
    FILE * ptr1 = fopen("file1.txt","w");
    //fprintf(ptr1,"string stored in file is that : \n ");
    fputs(a,ptr1);
    fprintf(ptr1,"number : %d",b);    
    fclose(ptr1);
    return 0;

}