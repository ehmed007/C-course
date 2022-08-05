#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//declaration or prototype total four funtions;
int valid(int col, int row);

void forstoring(int rows1, int columns1, int rows2, int columns2, int matrix1[rows1][columns1], 
                int matrix2[rows2][columns2]);

void formultiply(int rows1, int columns1, int rows2, int columns2, int matrix1[rows1][columns1],
                 int matrix2[rows2][columns2], int mulmatrix[columns1][rows2]);

void forprint(int rows1, int columns2,int mulmatrix[rows1][columns2]);



int main() {
    while (1) {
        int rows1, columns1;
        int rows2, columns2; 
        printf("\nenter the number of rows for 1 matrix : ");
        scanf("%d", &rows1);
        printf("enter the number of columns for 1 matrix : ");
        scanf("%d", &columns1);
        printf("enter the number of rows for 2 matrix : ");
        scanf("%d", &rows2);
        printf("enter the number of columns for 2 matrix : ");
        scanf("%d", &columns2);
        int v = valid(columns1, rows2);
        if (v == 0) {
            system("CLS");
            printf("wrong dimensions! not valid for multiplication of matrix. \ninput dimensions again plz \n");
            continue;
        }
        int matrix1[rows1][columns1];
        int matrix2[rows2][columns2];
        int mulmatrix[columns1][rows2];
        forstoring(rows1, columns1, rows2, columns2, matrix1, matrix2);
        formultiply(rows1, columns1, rows2, columns2, matrix1, matrix2, mulmatrix);
        forprint(rows1, columns2, mulmatrix);
        char chk;
        printf("\npress 0 to exit or 1 to do more multiplication : ");
        chk = getch();
        if (chk == '0') {
            exit(0);
        } else {
            system("CLS");
            continue;
        }
    }
    return 0;
}

//first
int valid(int col, int row) {
    if (col==row) {
        return 1;
    }
    return 0;
}

//second
void forstoring(int rows1, int columns1, int rows2, int columns2, int matrix1[rows1][columns1], 
                int matrix2[rows2][columns2]) {
    printf("enter entries for Matrix 2 :\n\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns1; j++) {
            printf("enter value for matrix 1 at ij-%d%d : ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("\n\nenter entries for Matrix 1 :\n\n");
    for (int k = 0; k < rows2; k++) { 
        for (int l = 0; l < columns2; l++) {
            printf("enter value for matrix 2 at ij-%d%d : ", k, l);
            scanf("%d", &matrix2[k][l]);
        }
    }
}

//third
void formultiply(int rows1, int columns1, int rows2, int columns2, int matrix1[rows1][columns1], 
                 int matrix2[rows2][columns2], int mulmatrix[columns1][rows2]) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns2; j++) {     
            mulmatrix[i][j]=0;
            for (int k = 0; k < columns2; k++) {
                mulmatrix[i][j] = mulmatrix[i][j] + matrix1[i][k]*matrix2[k][j];          
            }
        }
    }
}

//fourth
void forprint(int rows1, int columns2,int mulmatrix[rows1][columns2]) {
    printf("\n\n");
    printf("After multiplication Result matrix is : \n\n");
    for (int t = 0; t < rows1; t++) {
        printf("\t");
        for (int j = 0; j < columns2; j++) {
            printf("%d\t",mulmatrix[t][j]);
        }
        printf("\n");
    }
}