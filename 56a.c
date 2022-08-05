#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
	char a[100];
	char b[100];
	int result; 
	int check = 0;
    int check1 = 0;
	FILE * ptr = NULL;
	FILE * ptr1 = NULL;
	ptr = fopen("C:\\Users\\Ustaaad\\Desktop\\New folder\\pic.txt","r");
	ptr1 = fopen("C:\\Users\\Ustaaad\\Desktop\\pic2.txt","r");
	while (1) {
    	fgets(a, 100, ptr);
	    fgets(b, 100, ptr1);
	    result = strcmp(a,b);
        if (result == 0) {
            check = 1;
            if (feof(ptr)) {
                break;
            }
            continue;
	    } else {
            check1 = 1;
            break;
	    } 
    } 
	fclose(ptr);
	fclose(ptr1); 
	if (check1 == 1) {
        printf("files are not same");
        exit(0);
    } if (check == 1) {
		printf("files are same");
	}
	return 0;
}