#include <stdio.h>
#include <string.h>

int checkpalindrome(long long num) {
    long long digit,rev= 0,n;
    n = num;
    do {
        digit = n%10;
        //printf("digit %d \n",digit);
        rev = (rev*10)+digit;
        //printf("rev = %d \n",rev);
        n = n/10;
        //printf("n = %d\n",n); 
        //printf("\n");
    } while (n!=0);
    if (rev==num) {
        return 1;
    } else {
        return 0;
    }
}

int main() { 
    long long number;
    printf("enter a number to check \"Palindrome\" : ");
    scanf("%lld",&number);
    if(checkpalindrome(number)) {
        printf("This %lld number is a Palindrome.\n",number);
    } else {
        printf("This %lld is not a Palindrome.\n",number);
    }
    return 0;
}


 