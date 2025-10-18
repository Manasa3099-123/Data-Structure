//second largest and second smallest number
#include <stdio.h>
int Second_largest(int a[],int length);
int Second_smallest(int a[],int length);
int main(){
	int size,i;
	printf("Enter the size of an array:");
	scanf("%d",&size);
	int a[size];
	printf("Enter the array elements:");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
printf("Second largest element of a given array:%d\n",Second_largest( a, size));//	Second_largest( a, size);
printf("Second smallest element of a given array:%d",Second_smallest(a,size));//	Second_samllest(a[],size);
}
int Second_largest(int a[],int length){
	int i,largest=a[0],slargest=-1;
	for(i=1;i<length;i++){
		if(a[i]>largest){
			slargest=largest;
			largest=a[i];
		}
	}
	return slargest;}
	//these function works for if it has one negative number.if it have one negative number then 
	//sorting and printing the second element if it not equal to smallest element.
int Second_smallest(int a[],int length){
	int i,smallest=a[0],ssmallest=-1;
	for(i=1;i<length;i++){
		if(a[i]<smallest){
			ssmallest=smallest;
			smallest=a[i];
		}
	}
	return ssmallest;}	
