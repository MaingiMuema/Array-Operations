//Written by Mark Maingi
//DATE: 06/10/2021

//*****Search algorithm******

/*
  -Start
  -initialize i(for iteration operations),key(Holds value of the element being searched for), size(To specify the size of the array), arr(to create memory for holding elements in the array), found(Holds values 1 to represent element found and 0 to represent element not found)   
  -prompt user to enter size of the array
  -Prompt user to enter the elements in the array
  -for(i=0; i<size; i++)
  		Takes user input for elements in array
  -Prompt user to enter element to update
  -Prompt user to enter position of updating
  -arr[pos-1]=key
  -for(i=0; i<size; i++)
  		print ("Elements in the array")
  -Stop		  			
*/

//A program to search for an element in an array
#include<stdio.h>//Preprocessor directive
int main(){//
	int i, key, size, arr[50], found=0;//Declare variables
	printf("Enter size of the array: ");//Prompts user to define the size of the array
	scanf("%d", &size);//Takes user input and stores it in the address of the variable size
	printf("Enter the elements in the array: \n");
	for(i=0; i<size; i++){//Loop Iteration to take user input of the elements in the array
		scanf("%d", &arr[i]);//Takes user input and stores it in the array index of the current iteration
	}
	printf("Enter the element to search for in the array: ");//Prompts user to enter the be searched for in the array
	scanf("%d", &key);//Takes user input and stores its in the address of the variable key
	for(i=0; i<size; i++)//Loop iteration for comparing the values in the array by the key value entered by user
		if(arr[i]==key){//Condition to show if key is found...
			printf("The element is present in position %d", i+1);//Displays the element if the element is found in the array
			found=1;
			break;
		}	
		if(found==0){//Condition to show if key not found...
			printf("\nElement not found");
		}
	return 0;
}
