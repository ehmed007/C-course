#include <stdio.h>
#include <stdlib.h>

struct ahmed {
    int i;
};
 
struct ahmed arr[4];

int main() {
    arr[0].i = 6; 
    int *array = malloc(5*sizeof(int));
    array[0] = 1;
    array[1] = 6;
    array[2] = 7;
    array[3] = 8;
    array[4] = 9; 
    //*(array+2) = 8;g
    //int *a = array+4;
    for (int i=4; i>=0; i--) { 
        printf("%d\n",arr[0].i);
    }
    //printf("%d",middle(1,7,3));
    /*
    for (int i=1,j=1; i<8; i++) {
        if ((i > 5 && j < 3) || (i <= 2 && j != 5)) {
            printf("%d %d\n",i ,j);
            printf("Hello!\n");
        } else {
            printf("%d %d\n",i ,j);
            printf("Yellow!\n");
        }
        j++;
    }*/
    return 0;
}