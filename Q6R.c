#include <stdio.h>

int binarysearch(int r, int l, int arr[9], int x) {
    if (r >= l) {
        int mid = (l+r)/2;
        if (arr[mid] == x) {
            return mid;
        }
        if (arr[mid] < x) {
            return binarysearch(r, mid+1, arr, x);
        }
        if (arr[mid] > x) {
            return binarysearch(mid-1, l, arr, x);
        }
    }
}

int main() {
    int arr[10] = {11,12,13,14,15,16,17,18,19,20};
    int x = binarysearch(10-1, 0, arr, 13);
    printf("%d",x);
}
