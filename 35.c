#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int x=0;
int y=0;

struct attendence {
    char rollnum; 
}; 

void datastore(struct attendence j[50]) {
    for (int i=1; i<=50; i++) {
    printf("\n\n\n\nPLEASE ENTER THE PRESENT AND ABSENT AS ***(\"P\"/\"A\")*** :\n");
        if (i<10) {
            printf("\n");
            int m;
            printf("\t\tBITFA50%d = ",i); 
            m = getch();
            if(x==50 || y==50 ) {
                x=0;
                y=0;
            } if (m==112) {
                j[i].rollnum = 'P';
                x++;
            } if (m==97) {
                j[i].rollnum = 'A';
                y++;
            }
            system("CLS");
        } if (i>=10) {
            printf("\n");
            int n;
            printf("\t\tBITFA5%d = ",i);
            n = getch();
            if(x<=50 || y<=50 ) {
                x=0;
                y=0;
            } if (n==112) {
                j[i].rollnum = 'P';
                x++;
            } if (n==97) {
                j[i].rollnum = 'A';
                y++;
            } system("CLS"); 
        }
    }
}

void printlist(struct attendence j[50]) {
    printf("\n\nCOMBINE LIST OF ALL PRESENTS AND ABSENTS :\n");
    printf("\n");
    for (int k=1; k<=50; k++) {
        if (k<10) {
            printf("\t\tBITFA50%d : \" %c \"\n",k,j[k].rollnum);
        } if (k>=10) {
            printf("\t\tBITFA5%d : \" %c \"\n",k,j[k].rollnum);
        }    
    }    
}

void forpresent(struct attendence j[50]) {
    printf("\n\nALL PRESENTS  :\n");
    printf("\n");
    for (int a=1; a<=50; a++) {
        int b = j[a].rollnum;
        if (b==80) {
            if (a<10) {
                printf("\t\tBITFA50%d : \" %c \"\n",a,j[a].rollnum);
            } if (a>=10) {
                printf("\t\tBITFA5%d : \" %c \"\n",a,j[a].rollnum);
            }     
        }
    }    
}

void forabsent(struct attendence j[50]) {
    printf("\n\nALL ABSENTEES :\n");
    printf("\n");
    for (int a=1; a<=50; a++) {
        int b = j[a].rollnum;
        if (b==65) {
            if (a<10) {
                printf("\t\tBITFA50%d : \" %c \"\n",a,j[a].rollnum);
            } if (a>=10) {
                printf("\t\tBITFA5%d : \" %c \"\n",a,j[a].rollnum);
            }    
        } 
    } 
}


void menu(struct attendence j[50]) {
    while (1) {
        char input;
        printf("\n\n\n\t~~~~~~~MENU~~~~~~~\n\n");
        printf("PRESS 0 FOR EXIT              :\n");
        printf("PRESS 1 TO STORE DATA         :\n");
        printf("PRESS 2 FOR LIST(COMBINE)     :\n");
        printf("PRESS 3 FOR LIST OF (PRESNTS) :\n");
        printf("PRESS 4 FOR LIST OF (ABSENTS) :\n\n");
        printf("\nWHAT WOULD BE YOUR CHOICE : ");
        input = getch();
        if (input=='0') {
            system("CLS");
            exit(0);
        } if (input=='1') {
            datastore(j);
            printf("\n\nYOU ENTERED DATA SUCCESSFULLY : \n");
        } if (input=='2') {
            if(j[10].rollnum==65 || j[10].rollnum==80) {
                printlist(j);
                printf("\n\npress any key to view MENU _ ");
                getch();
                system ("CLS");
            } else {
                printf("\n\nERROR : list can't be display no data entered..\n\n");
                printf("press any key to view MENU _ ");
                getch();
                system("CLS"); 
            }
        } if (input=='3') {
            if(j[1].rollnum==65 || j[1].rollnum==80) {
                if(y==50) {
                    printf("\n\nNO STUDENT IS PRESENT.\n\n");
                    printf("ALL ARE ABSENT.\n\n");
                }else {
                    forpresent(j);
                }
                //forpresent(j);
                printf("\n\npress any key to view MENU _ ");
                getch();
                system ("CLS");
            } else {
                printf("\n\nERROR : list can't be display no data entered..\n\n");
                printf("press any key to view MENU _ ");
                getch();
                system("CLS");
            }
        } if (input=='4') {
            if(j[1].rollnum==65 || j[1].rollnum==80) {
                if(x==50) {
                    printf("\n\nNO STUDENT IS ABSENT.\n\n");
                    printf("ALL ARE PRESENT.\n\n");
                }else {
                    forabsent(j);
                }
                //forabsent(j);
                printf("\n\npress any key to view MENU _ ");
                getch();
                system ("CLS");
            } else {
                printf("\n\nERROR : list can't be display no data entered..\n\n");
                printf("press any key to view MENU _ ");
                getch();
                system("CLS");
            }
        }
    }            
}

 

int main() { 
    //while (1) {
    struct attendence j[50];
    menu(j);
    //}
    return 0;
}
