#include <iostream>
#include <stdlib.h>

using namespace std;

struct node {
    int data;
    struct node* next;
};

struct node* head = NULL;
struct node* assist = NULL;

void circular_linked_list(int n) {
    for (int i=0; i<n; i++) {
        struct node* current = (struct node*)malloc(sizeof(struct node));
        cout <<"enter data for 1 : ";
        cin >>current->data;
        if (head == NULL) {
            head = current;
            assist = current; 
            assist->next = head;
            continue;
        }
        assist->next = current;
        assist = current;
        assist->next = head;
    }
}

void display() {
    int i = 0;
    struct node* temp = head;
    while (i<12) { 
        cout <<"value for "<<i<<" = "<<temp->data<<endl<<endl;
        temp = temp->next;
        i++; 
    }
} 

int main() {
    int count;
    cout <<"number of nodes u want to add : ";
    cin >>count;
    circular_linked_list(count);
    display();
    return 0;
}