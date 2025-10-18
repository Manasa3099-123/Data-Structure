//reversing the stack
#include <stdio.h>
#define max 10
void initialise();
void push();
int pop();
void reverse();
struct stack{
	int a[max];
	int top;
}s;
void main(){
	int choice;
		initialise();
		while(s.top!=max){
		printf("enter the operation 1.PUSH\t2.POP\t3.Reverse\t4.exit\n");
	scanf("%d",&choice);
	initialise();
	if (choice==1)
	   push();
	  else if (choice==2)
	   pop();
	   else if(choice==3)
	   reverse();
	   else
	   break;
}
void initialise(){
	s.top==-1;
}
void push(){
	if(s.top==max-1)
	 printf("Stack is full");
	 else
	 {
	 	int data;
	 	printf("Enter the data element:");
	 	scanf("%d",&data);
	 	s.a[++s.top]=data;
	 	printf("element is pushed sucessfully");
	 }
}
void pop{
if(s.top==-1)
printf("Stack is empty");
else{
	
	printf("%d is popped from the stack",s.top--);
}}
void reverse(){
	int b[max];
	
}




