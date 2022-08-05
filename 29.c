#include <stdio.h>
#include <string.h>
//#include <conio.h>
//#include <stdlib.h>

struct agency {
    char name[60];
    long long lisence;
    char route[60]; 
    long long kms;
}; 
struct agency driver1;//, driver2, driver3;

int main() {
    /*
    char array[3][1000] = {"driver1", "driver2", "driver3"};
    for (int i=0;i<=3;i++) {
        printf("%s\n",array[i]);
    }*/
    
    for(int i=0;i<3;i++) {
        printf("Enter information for %d Driver :\n",i+1);
        printf("\nEnter your Name : \n");
        //scanf("%s",driver1.name);
        gets(driver1.name);
        printf("Enter your Route : \n");
        //scanf("%s",driver1.route);
        gets(driver1.route);
        printf("Enter your Lisence number : \n");
        scanf("%lld",&driver1.lisence);
        printf("Enter your KMS : \n");
        scanf("%lld",&driver1.kms);

        fflush(stdin);//clear the output stream
        
        printf("\n\n\nINFOMATION ABOUT DRIVER %d : \n\n",i+1);
        printf("\t1- Name           :\t\"%s\"\n",driver1.name);
        printf("\t2- Lisence Number :\t\"%lld\"\n",driver1.lisence);
        printf("\t3- Route          :\t\"%s\"\n",driver1.route);
        printf("\t4- KMS            :\t\"%lld\"\n\n\n",driver1.kms);
    }

    return 0;
}