//inserting into the linked list
#include<stdio.h>
#include<stdlib.h>
struct list{
	int data;
	struct list *p;
}ll;
void main(){
int d;
printf("ENter the data of newly inserted list:");
scanf("%d",&data);	
//logic to insert the node
struct list *temp;
temp=(struct list *)malloc(struct list);
temp->data=d;
temp->p=head;
head=temp;}
