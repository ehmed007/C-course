#include <stdio.h>

void check() {
    static int a;
    a= 10;
    printf("%d",a);
    a++;
    a++;
    a++;
    printf("%d",a);
}

int main() {
    check();
    printf("\n");
    check();
    return 0;
}
