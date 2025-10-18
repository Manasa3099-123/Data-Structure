#include <stdio.h>
#include <stdlib.h>
struct list{
	int data;
	int degree;
	struct list *p;
};
int main()
{
int highest_degree,i;
printf("Enter the highest degree of the polynomial: ");
scanf("%d", &highest_degree);

struct list *temp = NULL, *head = NULL, *pre = NULL;
int coefficient;

for(i = highest_degree; i >= 0; i--){
	printf("Enter the coefficient for degree %d: ", i);
	scanf("%d", &coefficient);

	// Only create a node if the coefficient is not zero
	if(coefficient != 0){
		// Allocate memory for the new term
		temp = (struct list*)malloc(sizeof(struct list));
		if (temp == NULL) {
			printf("Memory allocation failed!\n");
			return 1; // Exit with an error code
		}
		temp->data = coefficient;
		temp->degree = i;
		temp->p = NULL;

		// If this is the first term, it's the head
		if(head == NULL){
			head = temp;
			pre = temp;
		} else {
			// Link the previous node to the current one
			pre->p = temp;
			// Move 'pre' to the current node for the next iteration
			pre = temp;
		}
	}
}
//logic to insert the node
temp=(struct list *)malloc(sizeof(struct list));
int d;
printf("ENter the data of newly inserted list:");
scanf("%d",&d);	
temp->data=d;
temp->p=head;
head=temp;
//printing the polynomial
printf("\nThe polynomial is:\n");
temp=head;
while(temp!=NULL){
	printf("coefficient: %d\t, degree: %d\n", temp->data, temp->degree);
	temp=temp->p;
}
return 0;
}
