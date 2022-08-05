#include <stdio.h>
/*
int main() {
    int a;
    void *ptr = &a;
    printf("value : %p\n\n",ptr);
    char b;
    ptr = &b;
    printf("value : %p\n",ptr);
    int *ty = &a;
    ty = &b;
    printf("value : %p\n",ptr);
    return 0;
}*/
 //FOR NULL POINTERS
int main() {
    int a = 50;
    printf("address of a : %d\n",&a);
    int *ptr;
    // important point
    //printf("value at a : %d\n",*ptr); // the program will crash bcz we cannot dereferenced the NULL pointer
    printf("address store in pointer = %d\n\ns",ptr);//now no value has assigned to a pointer so 
                                                     //it will print a 0 or NULL
    
    if (ptr != NULL) {
        printf("address store in pointer = %d",ptr);
    } else {
        printf("the pointer is NULL \n");
    }
    return 0;
}
/*
int main() {
    int *var;
    printf("value : %d",*var);// it will throw error cause it is not pointing any variable.
    return 0; 
}*/
