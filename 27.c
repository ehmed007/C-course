#include <stdio.h> 
#include <stdlib.h>
#include <time.h> 

int main(){
    int number, guess, nguesses=1;
    srand(time(0));
    number = rand();
    //scanf("%d",&number);
    do{
        printf("Guess the number\n"); 
        scanf("%d", &guess);
        if (guess > number){
            printf("Lower number please\n");
        }
        if (guess < number){
            printf("Higher number please\n");
        }
        if (guess == number) {
            printf("You guessed it in %d attempts\n", nguesses);
        }
        nguesses++;
    }
    while(guess != number);
    return 0;
}

