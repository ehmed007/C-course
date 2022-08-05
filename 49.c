#include <stdio.h>
#include <stdlib.h>
#define IS 5
typedef struct Record {
    int i ;
    long j;
} Data;
Data *qelm = NULL; 
long size = 0, removeAt = 0, insertAt = 0;
void enqueue(int i , int j) {
    if(insertAt == size) {
        incMem();
    }
    Data d;
    d.i= i;
    d.j =j;
    qelm [insertAt++]= d;
}

Data* dequeue() {
    if(removeAt == insertAt) {
        printf("\n Q is empty!");
        return NULL ;
    }
     return &qelm[removeAt++];
}
void incMem() {
    if (qelm == NULL) {
        qelm = malloc (IS*sizeof(Data));
    }
    else {
        qelm = realloc (qelm,(IS+size)*sizeof(Data));
    }
    size = size +5;
}
void printMenu() {
    printf("\n\n *** MENU *** \n\n");
    printf("\n Choose 1 for enqueue");
    printf("\n Choose 2 for dequeue");
    printf("\n Choose 3 for show sizes");
    printf("\n Choose 4 for exit");
}

int main () {
    int op, i;
    Data *elm;
    long j;
    printMenu();  
    while (1)
    {
        printf("\nProvide Choice=");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("\nEnter i and j");
            scanf("%d", &i);
            scanf("%d", &j);
            enqueue(i,j);
            break;
        case 2:
            elm = dequeue();
            printf("\n%d, %ld",elm->i, elm->j);
            break;
        case 3:
            printf("\n size=%ld, removeAt=%ld, insertAt =%ld", size, removeAt, insertAt);
            break;
        case 4:
            exit(0);
            break;
        
        default:
            printf("\n invalid option");
            break;
        }
    }
    return 0;
}