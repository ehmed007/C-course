#include <stdio.h>
#include <string.h>

int main() {
    char array[20] = {'{','{','{','{','}','{','}','{','{','{','{','}','}','}','}','}','}','{','}','}'};
    int a = 0, b = 0;
    for (int i = 0; i<20; i++) {
        if (array[i] == '{') {
            a++;
        } if (array[i] == '}') {
            b++;
        }
    }
    if (a == b) {
        printf("\nAll brackets are in pairs");
    } else {
        printf("\nNot all brackets are in pairs");
    }
    return 0;
}