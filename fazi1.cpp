#include <iostream>

using namespace std;

void func(int size, int arr[], int& ptr, int& ptr1) {
    arr[size];
    int point = 0;
    int freq = 0;
    int check = 0;
    int max = 0;
    int assisst;
    for (int i = 0; i<size; i++) {
        assisst = arr[i];
        for (int j=i; j<size; j++) {
            if (assisst == arr[j]) {
                freq++;
                point++;
            }
        }
        if (point > check) {
            check = point;
            ptr = arr[i];
        }
        if (freq > max) {
            max = freq;
        }
        point = 0;
        freq = 0;
    }
    ptr1 = max;
}


int main() {
    int count;
    int count1;
    int array1[8] = {3,5,3,6,7,3,3,3};
    int array2[5] = {5,2,2,2,6};
    int array3[9] = {3,5,8,6,8,8,8,8,9};
    int array4[7] = {3,1,9,5,4,3,2};
    func(8, array1, count, count1);
    cout <<"\n\nFor array 1 :\n";
    cout <<"Number = "<<count<<"\nfrequency = "<<count1;
    func(5, array2, count, count1);
    cout <<"\n\nFor array 2 :\n";
    cout <<"Number = "<<count<<"\nfrequency = "<<count1;
    func(9, array3, count, count1);
    cout <<"\n\nFor array 3 :\n";
    cout <<"Number = "<<count<<"\nfrequency = "<<count1;
    func(7, array4, count, count1);
    cout <<"\n\nFor array 4 :\n";
    cout <<"Number = "<<count<<"\nfrequency = "<<count1;
    return 0;
}