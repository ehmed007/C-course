#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void delay(int number_of_seconds) {
    // Converting time into milli_seconds
    int milli_seconds = 2000 * number_of_seconds;
  
    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds);
}

int main() {
    int minute=0,second=0;
    for (int i=0; i<2; i++) {
        for (int j=0; j<10; j++) {
            cout <<"\t\t\t"<<minute<<" : "<<second;
            delay(1);
            second++;
            system("CLS");
        }
        second = 0;
        minute++;
    }
    return 0;
}
