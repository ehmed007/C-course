#include <stdio.h>
#include <stdlib.h>

int main() {
    while(1) {
    //use of malloc()
    //value will initiallize with garbage value in malloc()
    int n;
    int *a;
    printf("enter the range of array : ");
    scanf("%d",&n);
    //can be write as    a = (int*)malloc(3*sizeof(int));
    a = (int*)malloc(n*sizeof(int)); //***imp***syntax pointer varible=(data type)malloc(number of bytes)

    //use of calloc()
    //value will initiallize with 0 value in calloc()
    a = (int*)calloc(n,sizeof(int)); //***imp***syntax pointer varible=(data type)calloc(n,number of bytes)

    for (int i=0; i<n; i++) {
        printf("enter %d number : ",i+1);
        scanf("%d",&a[i]);
    }

    for (int i=0; i<n; i++) {
        printf("values %d : %d \n",i+1,a[i]);
    }
    
    printf("enter the range of array for ur final range : ");
    scanf("%d",&n);

    a = (int*)realloc(a,n*sizeof(int));
    
    for (int i=0; i<n; i++) {
        printf("enter %d number : ",i+1);
        scanf("%d",&a[i]);
    }

    for (int i=0; i<n; i++) {
        printf("values %d : %d \n",i+1,a[i]);
    }
    free(a);//free the memory which we use in runtime 
    }
    return 0;

}