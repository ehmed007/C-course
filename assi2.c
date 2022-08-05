#include <stdio.h>
#include <stdlib.h>

int main() {
    char line[500];
    char ch;
    FILE *fp = fopen("fys.txt", "r+");
    FILE *fp1 = fopen("3333.txt", "w+");
    while(!feof(fp)) {
        fgets(line, 500, fp);
        int i = 0; 
        while (line[i] != '\n') {
            ch = line[i];
            if (i>0 && i%10 == 0) {
                fprintf(fp1, "\n");
            } 
            fputc(ch, fp1);
            i++;
        }     
        fprintf(fp1, "\n");
    }        
    fclose(fp);
    fclose(fp1);
    return 0;
}