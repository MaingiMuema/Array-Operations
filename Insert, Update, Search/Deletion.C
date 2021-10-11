//A program delete an element from an array
#include<stdio.h>
int main(){
	int i, arr[50], pos, size;
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	printf("\nEnter the elements in the array: \n");
	for(i=0; i<size; i++){
		scanf("%d", &arr[i]);
	}

	printf("\nEnter the position to delete element: \n");
	scanf("%d", &pos);
	for(i=pos-1; i<size; i++){
		arr[i]=arr[i+1];
	}
	size--;
	printf("\nThe elements in the arrays after deletion are: ");
	for(i=0; i<size; i++){
		printf("\n%d\n", arr[i]);
	}
	
}
