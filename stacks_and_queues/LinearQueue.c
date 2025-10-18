//implementing linear queues using arrays
#include <stdio.h>
#define max 5
void Enqueue(int);//forward declaration
int Dequeue();
void initialisation();
struct Queue{
int Q[max];
int rear,front;
}q;
void main(){
int choice;
initialisation();
while(1){

printf("Which operations you want to perform:1.Enqueue\t2.Dequeue\t3.exit\n");
scanf("%d",&choice);
if(choice==1){
int element;
printf("Enter the elements:");
scanf("%d",&element);
Enqueue(element);}
else if (choice==2){
int data=Dequeue();
if(data!=-1)
printf("%d is popped from the queue\n",data);}
else{
break;
}
}
}
void initialisation(){
q.front=q.rear=-1;
}
void Enqueue(int x){
if(q.rear==max-1){
printf("Queue is full\n");
return;
}
else{
q.Q[++q.rear]=x;

if(q.front==-1)
q.front=0;
printf("Element is added to the queue and %d is rear,%d is front\n",q.rear,q.front);
}
}
int Dequeue(){
int data;
if(q.front==-1){
printf("Queue is empty\n");
return -1;
}
else{
data=q.Q[q.front];
if(q.front==q.rear)
q.front=q.rear=-1;
else
q.front++;
printf("Element is added to the queue and %d is rear,%d is front\n",q.rear,q.front);
}
return data;
} 


