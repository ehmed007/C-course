#include <iostream>
using namespace std;

int add(int a, int b) {
    return a+b;
}

int main() {
    int a = 9;
    int b = 11;
    cout << add(a, b);
    return 0;
}