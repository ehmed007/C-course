#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main() {
    char ch;
    int num,save;
    int array[100];
    cout <<"press any character to get binary of it : ";
    ch = getch();
    num = (int)ch;
    cout <<"\nvalue : "<<num;
    int i = 0;
    while(num!=0) {
        save = num%2;
        num = num/2;
        array[i] = save;
        i++;
    }
    i--;
    cout <<"\nbinary : ";
    for (int j = i; j>=0; j--) {
        cout <<array[j];
    }
    return 0;
}