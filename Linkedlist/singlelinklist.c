#include <stdio.h>
#include<stdlib.h>
void insert();
void Deletion();
void Traversal();
//implemention of single linked list
struct List{
int data;
struct List *r;
}*temp,*head,*pre;
//insertion
void insert(){
temp=(struct List*)malloc(sizeof(struct List));
if(temp){

printf("Enter the integer data:");
scanf("%d",&temp->data);
pre->r=temp;
temp->r=NULL;
pre=temp;}
else
printf("memory is not avaliable");
}
//deletion
void Deletion(){
if (head==NULL){
printf("There is no list to delete\n");
exit(1);}
else{
int i,p;
printf("Which list you want to delete(entire the position):\n");
scanf("%d",&p);
temp=head;
for(i=1;i<p-1;i++){
temp=temp->r;
}
struct List *pr;
pr=temp->r;
temp->r=pr->r;}
}
//creating first list
void main(){
temp=(struct List*)malloc(sizeof(struct List));
printf("ENter the data of the first node:");
scanf("%d",&temp->data);
temp->r=NULL;
head=pre=temp;
int choice;
while(1){
printf("Which operation you want to perform:1.Insertion\t2.Deletion\t3.Traversal\n");
scanf("%d",&choice);
if (choice==1)
insert();
else if(choice==2)
Deletion();
else if(choice==3)
Traversal();
else
break;}
}
//Traversal
void Traversal(){
temp=head;
while(temp!=NULL){
printf("%d\n",temp->data);
temp=temp->r;
}
}


