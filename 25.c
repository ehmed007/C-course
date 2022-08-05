#include <stdio.h>

union student {
    int rollno;
    int marks;
    double ahmed;
};

union student rio,robin;

int main() {
    robin.marks=75;
    rio.marks=90;
    rio.rollno=29;
    robin.rollno=30;
    printf("%d\n%d\n%d\n%d\n",rio.rollno, rio.marks, robin.rollno, robin.marks);
    int a=sizeof(union student);
    printf("%d",a);
    return 0;
}