#include <stdio.h>
#include <stdlib.h>

int validateAddSub(int arows, int acols, int brows, int bcols, int A[arows][acols], int B[brows][bcols]);
void addSubMatrices(int arows, int acols, int brows, int bcols, int A[arows][acols], int B[brows][bcols], int result[brows][bcols], int isAdd);

void inputIn2DMatrix(int rows, int cols, int A[rows][cols]) {
	for (int i = 0; i < rows; i++) {
		for (int j=0; j <cols; j++) {
			printf("\nEnter input for [%d][%d] = ", i, j);
			scanf("%d", &A[i][j]);
		}
	}
}

void print2DMatrix(int rows, int cols, int A[rows][cols]) {
	for (int i = 0; i < rows; i++) {
		for (int j=0; j <cols; j++) {
			printf("\nmatrix[%d][%d]=%d\n", i, j, A[i][j]);
		}
	}
}
/*
* returns 1 if dim are valid for addition and subtraction
* Otherwise returns 0.
*/
int validateAddSub(int arows, int acols, int brows, int bcols, int A[arows][acols], int B[brows][bcols]) {
	if (arows == brows && acols == bcols) {
		return 1;
	}
	return 0;
}

void addSubMatrices(int arows, int acols, int brows, int bcols, int A[arows][acols], int B[brows][bcols], int result[brows][bcols], int isAdd) {
	if (validateAddSub(arows, acols, brows, bcols, A, B) == 0) {
		printf(" Invalid dimensions cannot add or sub. Try again!");
		return;
	}

	for (int i=0; i<arows; i++) {
		for (int j=0; j<acols; j++) {
			if (isAdd == 2) {
				result[i][j] = A[i][j]+B[i][j]; 
			} else {
				result[i][j] = A[i][j]-B[i][j]; 
			}
		}
	}
}
void menu() {
	int option;
	int rowa, cola, rowb, colb;
	while (1) {
		printf("\n\n\n\n ********* M E N U ********* \n\n");
		printf("\n Select 1 for multiply \n");
		printf("\n Select 2 for addition \n");
		printf("\n Select 3 for subtraction \n");
		printf("\n Select 4 for compare \n");
		printf("\n Select 5 for quit \n");
		scanf("%d", &option);
		if (option == 1) {
			// multiply matrices 
		} else if (option == 2 || option == 3) {
			printf("\n Enter dimension of first matrix \n");
			scanf("%d", &rowa);
			scanf("%d", &cola);
			printf("\n Enter dimension of second matrix \n");
			scanf("%d", &rowb);
			scanf("%d", &colb);
			int A[rowa][cola], B[rowb][colb], result[rowb][cola];
			printf("\n\n Enter Data in A\n\n");
			inputIn2DMatrix(rowa, cola, A);
			printf("\n\n Enter Data in B\n\n");
			inputIn2DMatrix(rowb, colb, B);			
			addSubMatrices(rowa, cola, rowb, colb, A, B, result, option); 	
			print2DMatrix(rowa, cola, result);
		} else if (option == 4) {
			//compare
		} else if (option == 5) {
			//exit program
			exit(EXIT_SUCCESS);
		} else {
			printf("\n Invalid option selected. Try again \n");
		}
	}
}



int main() {
	menu();
	return EXIT_SUCCESS;
}