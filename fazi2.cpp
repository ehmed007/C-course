#include <iostream>

using namespace std;

int removeNegatives(int arr[], int size, int *newSize) {
    int neg_num = 0;
    cout <<"\nArray before removing negative numbers :\n"<<endl;
    for (int i=0; i<size; i++) {
        cout <<arr[i]<<"\t";
    }
    for (int i=0; i<size; i++) {
        if (arr[i] < 0) {
            neg_num++;
            for(int j=i; j<size; j++) {
                arr[j]=arr[j+1];
            }
            i-=1;
        }
    }
    *newSize = size-neg_num;
    return neg_num;
}

int main() {
    int var;
    int array1[8] = {3,5,-3,-6,-7,-3,3,3};
    int array2[5] = {5,-2,2,-2,-6};
    int array3[9] = {3,-5,8,6,-8,-8,8,8,-9};
    int array4[7] = {3,-1,9,5,4,-3,2};
    cout<<"******ARRAY : 1\n\n";
    int var1 = removeNegatives(array1, 8, &var);
    cout <<"\n\nArray after removing nagative values \n";
    cout <<"\nNumber of negative values removed : "<<var1<<endl;
    for (int i=0; i<var; i++) {
        cout <<array1[i]<<"\t";
    }
    cout <<"\n\n\n\n";
    cout<<"******ARRAY : 2\n\n";
    var1 = removeNegatives(array2, 5, &var);
    cout <<"\n\nArray after removing nagative values \n";
    cout <<"\nNumber of negative values removed : "<<var1<<endl;
    for (int i=0; i<var; i++) {
        cout <<array2[i]<<"\t";
    }
    cout <<"\n\n\n\n";
    cout<<"******ARRAY : 3\n\n";
    var1 = removeNegatives(array3, 9, &var);
    cout <<"\n\nArray after removing nagative values \n";
    cout <<"\nNumber of negative values removed : "<<var1<<endl;
    for (int i=0; i<var; i++) {
        cout <<array3[i]<<"\t";
    }
    cout <<"\n\n\n\n";
    cout<<"******ARRAY : 4\n\n";
    var1 = removeNegatives(array4, 7, &var);
    cout <<"\n\nArray after removing nagative values \n";
    cout <<"\nNumber of negative values removed : "<<var1<<endl;
    for (int i=0; i<var; i++) {
        cout <<array4[i]<<"\t";
    }
    cout<<"\n\n";

    return 0;
}