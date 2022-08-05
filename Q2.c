#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp1 = fopen("1.c", "r+");
    FILE *fp2 = fopen("newfile.txt", "w");
    char ch;
    while (feof(fp1) == 0) {
        ch = fgetc(fp1);
        if (ch == '/') {
            ch = fgetc(fp1);
            if (ch == '*') {
                while (1) { 
                    ch = fgetc(fp1);
                    if (ch == '*') {
                        ch = fgetc(fp1);
                        if (ch == '/') {
                            ch = fgetc(fp1);
                            break;
                        }
                    }
                }
            } else if (ch == '/') {
                while (1) { 
                    ch = fgetc(fp1);
                    if (ch == '\n') {
                        break;
                    }
                }
            }
        } 
        fputc(ch, fp2);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}