#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct data {
	int i;
	struct data *next;
}D;

D *firstElm = NULL;

/*
* Adds an element at the end of the linklist. 
*/
D* add(int i, D *preElm) {
	D *cur = (D *) malloc(sizeof(D));
	cur->i = i;
	if (preElm != NULL) {
		preElm->next = cur;
	}
	return cur;
}


/*
* Prints the link list.
*/
void printLL() {
	D *temp = firstElm;
	printf("\n ******** link List ******** \n");
	while (temp != NULL) {
		printf("%d\n", temp->i);
		temp = temp->next;
	}
}

/*
* removes an element from the link list
*/
void removeElm(int toRemove) {
	D *temp = firstElm;
	D *prevElm = NULL;
	while (temp != NULL) {
		if (temp->i == toRemove) {
			if (prevElm != NULL) { //not the first element to remove			
				prevElm->next = temp->next;
			
			} else {
				firstElm = firstElm->next;
			}	
			free(temp);
		}
		prevElm = temp;
		temp = temp->next;
	}
}

/*
* You are asked to write a function to sort elements of link list.
* For that, you can find a minimum from the link list, remove it, and
* add to another linklist. Then overwrite first of current linklist
* new linklist. Must not change code of any of the existing function (such as main).
*/
void sortLinkList() {
//add your code here.

}



int main() {
	int loop, toRemove;
	D *preElm = NULL;
	printf("\n add random 7 elements \n");
	for (loop = 0; loop < 7; loop ++) {
		int toAdd = rand()%97;
		printf("\ntoadd=%d", toAdd);
		preElm = add(toAdd, preElm);
		//if (firstElm == NULL) {
		//	firstElm = preElm;
		//}
	}
	printLL();
	printf("\n Element to remove = ");
	scanf("%d", &toRemove);
	removeElm(toRemove);
	printf("\n Linklist after removal = ");
	printLL();
	sortLinkList();
	printf("\n Linklist after sorting = ");
	printLL();
	return 0;
}