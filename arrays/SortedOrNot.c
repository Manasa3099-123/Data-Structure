//check whether the array is sorted or not
#include <stdio.h>
int main(){
	int ar[5]={1,2,2,4,5},i,check=0;
	for(i=0;i<4;i++){
		if(ar[i+1]<ar[i]){
			check++;
				break;
		}
	
	}
	printf("%d\t",check);
	if(check!=0){
		printf("The given array is not sorted");
	}
	else{
		printf("array is sorted");
	}
}
