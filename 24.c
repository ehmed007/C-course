#include <stdio.h>
#include <string.h>

struct member {
    char name[20];
    int age;
    char designation[20];
}; //ahmed, gudu, kaaleen;

struct member ahmed,gudu,kaaleen;

    

int main() {
    strcpy(ahmed.name,"Ahmed");
    ahmed.age = 19;
    strcpy(ahmed.designation,"Programmer");
    printf("\n\nYou boi :\n\n");
    printf("Name : %s\n",ahmed.name);
    printf("Age : %d\n",ahmed.age);
    printf("Designation : %s\n",ahmed.designation);

    strcpy(gudu.name,"Gudo Bhaiyaaa");
    gudu.age = 19;
    strcpy(gudu.designation,"IDK");
    printf("\n\nGudu Bhaiyaaa :\n\n");
    printf("Name : %s\n",gudu.name);
    printf("Age : %d\n",gudu.age);
    printf("Designation : %s\n",gudu.designation);

    strcpy(kaaleen.name,"Kaaleen Bhaiyaaa");
    kaaleen.age = 19;
    strcpy(kaaleen.designation,"King of Mirzapur");
    printf("\n\nKaaleen Bhaiyaaa :\n\n");
    printf("Name : %s\n",kaaleen.name);
    printf("Age : %d\n",kaaleen.age);
    printf("Designation : %s\n\n",kaaleen.designation);
    int a;
    a=sizeof(struct member);
    printf("%d",a);
    return 0; 
}
