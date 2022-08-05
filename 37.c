#include <stdio.h>
#include <string.h>

struct rollnumber {
	char batch[7] ; 
	int number; 
	
};
//nested structure
struct studentrecord { //return type
	struct rollnumber roll;
	int age;
	
};
//function is returning a structure. 
//arguement can be given as structure.
struct studentrecord createstruct (struct rollnumber i, int age)  { //function name is createstruct, arguements
	struct studentrecord rec; //variable name
	//rec.roll = i;
	//rec.age = age;
	return rec;
	
}

int main() {
	struct rollnumber stRN;
    strcpy(stRN.batch,"BITF20A");
	//stRN.batch = ['B', 'I', 'T, 'F, '2', '0', 'A'];
	stRN.number= 525;
	//call as : stRN
	struct studentrecord i = createstruct(stRN, 10); //variable name
	
	//printf("\n data in struct  %s%d, %d\n", i.roll.batch, i.roll.number, i.age);
	return 0;
}