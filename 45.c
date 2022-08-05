#include <stdio.h>
#include <string.h>

struct studentRecord {
    char name[20];
    int roll;
    float age;
};

struct studentRecord createstruct (char name[20], int roll, float age) {
    struct studentRecord x;
    strcpy(x.name, name);
    x.roll = roll;
    x.age = age;
    return x;
}

int main() {
    struct studentRecord get;
    char name[20];
    int roll;
    float age;
    printf("\nenter your name : ");
    scanf("%s",name);
    printf("\nenter your roll : ");
    scanf("%d",&roll);
    printf("\nenter your age : ");
    scanf("%f",&age);
    get = createstruct(name, roll, age);
    printf("\n\nYour name : %s",get.name);
    printf("\nYour roll : %d",get.roll);
    printf("\nYour age  : %0.2f",get.age);
    return 0;
}


