//implementing binary tree
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *l,*r;
}node;
node* getnode(int x);
//printing the data of the node
void Inorder(node *p){
	if(p){
		Inorder(p->l);
		printf("%d\n",p->data);
		Inorder(p->r);
	}
}
void postorder(node *p){
	if(p){
		postorder(p->l);
    	postorder(p->r);
		printf("%d\n",p->data);
	}
}
void preorder(node *p){
	if(p){
		printf("%d\n",p->data);
		preorder(p->l);
		preorder(p->r);
	}
}
//inserting a node in a BST	
void Insertion(node *temp,int x){
    	node *temp1=getnode(x);
    	node *pre=temp;
	while(temp)
	{pre=temp;
	
	if(temp->data>x){
	temp=	temp->l;}
	else {
		temp=temp->r;
	}
	   
	}
	if(pre->data>x)
	pre->l=temp1;
	else
	pre->r=temp1;
	}
	

//releasing the memory allocated
void freenode(node *p){
	if(p){
		freenode(p->l);
		freenode(p->r);
		free(p);
	}
}
node* getnode(int x){
	node *temp=(node*)malloc(sizeof(node));
	temp->data=x;
	temp->l=NULL;
	temp->r=NULL;
	return temp;
}
int main(){
	node *temp1=getnode(34);
	node *temp2=getnode(20);
	node *temp3=getnode(90);
	node *temp4=getnode(100);
	node *temp5=getnode(80);
	temp1->l=temp2;temp1->r=temp3;
	temp3->r=temp4;temp3->l=temp5;
	Insertion(temp1,10);
	printf("Inorder traversal:\n");
	Inorder(temp1);
		printf("Postorder traversal\n");
	postorder(temp1);
		printf("preorder traversal\n");
	preorder(temp1);
	freenode(temp1);
	
	return 0;
	}

