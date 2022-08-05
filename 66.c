#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}RE;

RE* add(int data,RE *head){
	RE *newnode=malloc(sizeof(struct node));
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(head==NULL){
	head=newnode;
	}else{
	head->next=newnode;
	head=newnode;
	}
	return head;
}

RE *Createnode(RE *head){
	RE *newnode=malloc(sizeof(RE));
	printf("Enter the value you want to insert in the beginning of Linklist:\n");
	scanf("\n%d",&newnode->data);
	newnode->next=head;
	head=newnode;
	return head;
}

RE *insertatend(RE *head,RE *temp){
	RE *newnode=malloc(sizeof(RE));
	printf("Enter the value you want to insert at the end:\n");
	scanf("%d",&newnode->data);
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newnode;
	newnode->next=NULL;
	return head;
}	
void Linklist(RE *head,int count){
	printf("\n******Link List******\n");
	RE *temp=head;
	while(temp != NULL){
	printf("%d\n",temp->data);
	temp=temp->next;
	count++;
	}
	printf("*******************\n");
	printf("%d Nodes are Created\n",count);
}
	
int main(){
	int count=0;
	int data,rec,j=1;
	RE *head=NULL;
	RE *newnode=NULL;
	RE *temp;
	printf("How Many Records You Want To Enter:\n");
	scanf("%d",&rec);
	while(j<=rec){
	printf("Enter the Data For Node %d:\n",j);
	head=add(data,head);
	j++;
	}
	head=Createnode(head);
	head=insertatend(head,temp);
	Linklist(head,count);
	return 0;
}
