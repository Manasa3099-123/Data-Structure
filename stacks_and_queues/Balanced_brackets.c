//evalauation of paranthesis
#include <stdio.h>
#include <stdlib.h>
#define max 6
void push(int x);
void pop(int x);
void init();
struct stack{
char s[max];
int top;	
}S;
int main(){
	char string[6];
	printf("Enter the string:");
	scanf("%s",&string);
	int i;
	init();
	for(i=0;i<6;i++){
		if(string[i]=='(' || string[i]=='{' || string[i]=='[')
		push(string[i]);
		else
		pop(string[i]);
	}
	printf("The given string is  valid\n");
}
void init(){
S.top=-1;	
}
void push(int x){
	if(S.top==max-1)
	printf("stack is full\n");
	else
	S.s[++S.top]=x;
	}
void pop(int x){
	
	if(S.top==-1)
	printf("stack is empty\n");
	else{
		if(x==')' && S.s[S.top]=='(')
		S.top--;	
		
		else	if(x==']' && S.s[S.top]=='[')
		S.top--;
		else	if(x=='}' && S.s[S.top]=='{')
		S.top--;
		else{
		
		printf("The given string is not valid");
		exit(1);}
		}
		}	
	
