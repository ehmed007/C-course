#include <stdio.h>

int function(int n) {
    if (n == 1) {
        return 1;
    }
    return n + function(n-1);
}

int main() {
    int n = function(4);
    printf("%d",n);
    return 0;
}