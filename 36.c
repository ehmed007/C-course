/*

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct member {
    int age ;
    char favchr;
    int class;
};


int main() {
    struct member ahmed, kaaleen , bhaiyaa;
    ahmed.age=98;
    ahmed.favchr='h';
    ahmed.class = 90;
    printf("age : %d\n",ahmed.age);
    printf("fav   chr : %c\n",ahmed.favchr);
    printf("claassssss : %d\n",ahmed.class);
    return 0;
}*/



#include <stdio.h>
#include <stdlib.h>
#include "conio.h"

struct attendence {
    char attend;
};

void takedata(struct attendence k[600]) {
    printf("enter P or A : \n");
    for (int i=501; i<=550 ; i++) {
        printf("\nBITF20A%d : ",i);
        k[i].attend = getch();
        system("CLS");
    }
}
void printlist(struct attendence k[600]) {
    printf("\n\ndisplay list of students\n\n");
    for (int i=501; i<=550; i++) {
        printf("\nBITF20A%d : %c",i,k[i].attend);
    }
}

void printabsents(struct attendence array[600]) {
    printf("\n\nno of absentees : \n");
    for (int i=501; i<=550; i++) {
        if (array[i].attend == 'p') {
            continue;
        } if (array[i].attend == 'a') {
            printf("\nBITF20A%d : %c",i,array[i].attend);
        }
    }
}


int main() {
    struct attendence array[600];
    takedata(array);
    printlist(array);//call of function
    printabsents(array);
    /*
    char input;
    printf("press any key :\n");
    input = getch();
    printf("pressed key : %c",input);
    */
    return 0;
}
















