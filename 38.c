#include <stdio.h>
#include <string.h>

struct fool {
    int bool;
    int bhai;
};

struct nested {
    int marks;
    char a[10];
    struct fool gool;
};

struct member {
    int age;
    struct nested check;
};
// this function will return the structure 
struct fool new() {
    struct fool mool;
    mool.bool = 50;
    mool.bhai = 70;
    return mool;
}

int main() {
    struct member ahmed;
    struct nested kaaleen;
    kaaleen.marks = 200;
    ahmed.check.marks = 90;
    ahmed.age = 100;
    ahmed.check.gool.bool = 1000;
    printf("%d and %d and %d and and %d\n",ahmed.check.marks, ahmed.age, kaaleen.marks,ahmed.check.gool.bool);
    printf("plz enter the name\n");
    scanf("%s",ahmed.check.a);
    printf("name : %s\n",ahmed.check.a);
    puts(ahmed.check.a);

    struct fool k = new();
    k.bhai = 800;
    k.bool = 1010;
    printf("%d and %d",k.bhai, k.bool); 
    return 0;
}