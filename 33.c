#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>


char username[20];
int userscore=0;
int systemscore=0;
int userval;
int systemval;

void decide(int userval, int systemval);

void gamein() {
    printf("\n\t\t\t\t\t\t0- ROCK   1- PAPER   2- SCISSOR\n\n");
    printf("\t\t\t\t\t\tenter the index : ");
    scanf("%d",&userval);
    printf("\n\n");
    srand(time(NULL));
    systemval = rand()%3;
    decide(userval, systemval);
}
void decide(int userval, int systemval) {
    if (userval==0 && systemval==1) {
        printf("\t\t\t\t\t\t\tYOU      : ROCK\n");
        printf("\t\t\t\t\t\t\tCOMPUTER : PAPER\n\n");
        printf("\t\t\t\t\t\t\tROCK     VS  PAPER\n\n");
        printf("\t\t\t\t\t\t\tOOOPPSS!! \n\t\t\t\t\t\t\tCOMPUTER WINS THIS ROUND YOU LOSE!!");
        systemscore++;
    } if (userval==0 && systemval==2) {
        printf("\t\t\t\t\t\t\tYOU      : ROCK\n");
        printf("\t\t\t\t\t\t\tCOMPUTER : SCISSOR\n\n");
        printf("\t\t\t\t\t\t\tROCK     VS  SCISSOR\n\n");
        printf("\t\t\t\t\t\t\tCONGRATULATION!! \n\t\t\t\t\t\t\tYOU WIN THIS ROUND!!\n\n");
        userscore++;
    } if (userval==1 && systemval==0) {
        printf("\t\t\t\t\t\t\tYOU      : PAPER\n");
        printf("\t\t\t\t\t\t\tCOMPUTER : ROCK\n\n");
        printf("\t\t\t\t\t\t\tPAPER    VS  ROCK\n\n");
        printf("\t\t\t\t\t\t\tCONGRATULATION!! \n\t\t\t\t\t\t\tYOU WIN THIS ROUND!!\n\n");
        userscore++;
    } if (userval==1 && systemval==2) {
        printf("\t\t\t\t\t\t\tYOU      : PAPER\n");
        printf("\t\t\t\t\t\t\tCOMPUTER : SCISSOR\n\n");
        printf("\t\t\t\t\t\t\tPAPER    VS  SCISSOR\n\n");
        printf("\t\t\t\t\t\t\tOOOPPSS!! \n\n\t\t\t\t\t\t\tCOMPUTER WINS THIS ROUND YOU LOSE!!\n\n");
        systemscore++;
    } if (userval==2 && systemval==0) {
        printf("\t\t\t\t\t\t\tYOU      : SCISSOR\n");
        printf("\t\t\t\t\t\t\tCOMPUTER : ROCK\n\n");
        printf("\t\t\t\t\t\t\tSCISSOR  VS  ROCK\n\n");
        printf("\t\t\t\t\t\t\tOOOPPSS!! \n\n\t\t\t\t\t\t\tCOMPUTER WINS THIS ROUND YOU LOSE!!\n\n");
        systemscore++;
    } if (userval==2 && systemval==1) {
        printf("\t\t\t\t\t\t\tYOU      : SCISSOR\n");
        printf("\t\t\t\t\t\t\tCOMPUTER : PAPER\n\n");
        printf("\t\t\t\t\t\t\tSCISSOR  VS  PAPER\n\n");
        printf("\t\t\t\t\t\t\tCONGRATULATION!! \n\n\t\t\t\t\t\t\tYOU WIN THIS ROUND!!\n\n");
        userscore++;
    } if (userval==systemval) {
        if (userval==0) {
            printf("\t\t\t\t\t\t\tYOU      : ROCK\n");
            printf("\t\t\t\t\t\t\tCOMPUTER : ROCK\n");
            printf("\t\t\t\t\t\t\tROCK     VS  ROCK\n\n");
            printf("\t\t\t\t\t\t\tCONCLUSION : TIE \n\n");
            printf("\t\t\t\t\t\t\t****TRY AGAIN****\n\n");
            gamein();
        } if (userval==1) {
            printf("\t\t\t\t\t\t\tYOU      : PAPER\n");
            printf("\t\t\t\t\t\t\tCOMPUTER : PAPER\n");
            printf("\t\t\t\t\t\t\tPAPER    VS  PAPER\n\n");
            printf("\t\t\t\t\t\t\tCONCLUSION : TIE \n\n");
            printf("\t\t\t\t\t\t\t****TRY AGAIN****\n\n");
            gamein();
        } if (userval==2) {
            printf("\t\t\t\t\t\t\tYOU      : SCISSOR\n");
            printf("\t\t\t\t\t\t\tCOMPUTER : SCISSOR\n");
            printf("\t\t\t\t\t\t\tSCISSOR  VS  SCISSOR\n\n");
            printf("\t\t\t\t\t\t\tCONCLUSION : TIE \n\n");
            printf("\t\t\t\t\t\t\t****TRY AGAIN****\n\n");
            gamein();
        }
    }
}
void score() {
    printf("\n\n\t\t\t\t****************************CONCLUSION :*****************************\n\n");
    if(userscore > systemscore) {
        printf("\t\t\t\t\t\t\tMR-%s",username);
        printf("\n\n\t\t\t\t\t\t\tCONGRATULATION!!!!!!");
        printf("\n\n\t\t\t\t\t\t\tYOU ARE WINNER!!!!!\n\n");
    } if (userscore < systemscore) {
        printf("\t\t\t\t\t\t\tMR-%s",username);
        printf("\n\n\t\t\t\t\t\t\tOOOPS!!!"); 
        printf("\n\n\t\t\t\t\t\t\tYOU ARE LOSER!!!!!\n\n");
    }
}


int main() {
    do {
        printf("\n\n                                                               HELLO!!!!!!!\n\n");
        printf("                                            \"WELLCOME TO THE ROCK,PAPPER & SCISSOR GAME\"\n\n");
        printf("                                                     \"TOU KYA HAAL HAI BHIAYAAAAA\"\n\n");
        printf("\n\n\nEnter your name : ");
        gets(username);
        sfflush(stdin);
        system("CLS");
        for(int i=1; i<=3; i++) {
            printf("\n\n\t\t\t\t*******************************ROUND %d*******************************\n\n",i);
            printf("\t\t\t\t\t\t\t\t\t\tMY SCORE        : %d",userscore);
            printf("\n\t\t\t\t\t\t\t\t\t\tCOMPPUTER SCORE : %d",systemscore);
            gamein();
            if(i==2 && (userscore==2 || systemscore==2) ) {
                printf("\n\npress any key for CONCLUSION _ ");
                getch();
                score();
                break;
            }
            if (i==3) {
                printf("\n\npress any key for CONCLUSION _ ");
                getch();
                break;
            }
            printf("\n\npress any key for next round _ ");
            getch();
            system("CLS");
        }
        system("CLS");
        score();
        char a;
        fflush(stdin);
        userscore = 0;
        systemscore = 0;
        printf("WANT TO PLAY AGAIN [Y|N] : ");
        a = getch();
        if (a=='n') {
            exit(0);
        }
        fflush(stdin); 
        system("CLS");
    } while(1);
    return 0;
}