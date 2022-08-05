#include <iostream>

using namespace std;

void cyclicRotate(int arr[], int size, int k) {
    int assisst;
    int l=0;
    int q=1;
    for (int i=k; i>0; i--) {
        assisst = arr[size-i];
        int check = size-i;
        for (check; check>0; check--) {
            arr[check]=arr[check-1];
        }
        arr[0] = assisst;
    }
}

int main() {
    int array[8] = {2,3,4,5,7,1,8,10};
    cout <<"Array before rotation\n";
    for (int i=0; i<8; i++) {
        cout <<array[i]<<"\t";
    }
    cout <<"\n\n";
    cyclicRotate(array,8,3);
    cout <<"Array after rotation\n";
    for (int i=0; i<8; i++) {
        cout <<array[i]<<"\t";
    }
    cout <<"\n\n";
    return 0;
}