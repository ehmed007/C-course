#include <iostream>

using namespace std;

bool isValid(int num, int start, int end);
int getLength();
int getWidth();
void calculateArea(int lenght, int width, int* area);
void displayArea(int area);

int main() {
    int area;
    int length = getLength();
    int width = getWidth();
    calculateArea(length, width, &area);
    displayArea(area);
    return 0;
}

bool isValid(int num, int start, int end) {
    if (num >= start && num<=end) {
        return true;
    }
    return false;
}

int getLength() {
    int length;
    while(1) {
        cout<<"\nEnter the Length of a rectangle :";
        cin>>length;
        if (isValid(length, 5, 500)) {
            break;
        }
        cout<<"\nwrong input enter value between 5 and 500 inclusively."<<endl;
    }
    return length;    
}

int getWidth() {
    int width;
    while(1) {
        cout<<"\nEnter the Width of a rectangle :";
        cin>>width;
        if (isValid(width, 8, 200)) {
            break;
        }
        cout<<"\nwrong input enter value between 8 and 200 inclusively."<<endl;
    }
    return width; 
}

void calculateArea(int lenght, int width, int* area) {
    *area = lenght*width;
} 

void displayArea(int area) {
    cout<<"\n\nArea of rectangle is : "<<area<<endl<<endl;
}