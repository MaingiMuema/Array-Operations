 //Written by Mark Maingi
//DATE: 06/10/2021

//*****Update algorithm******

/*
  -Start
  -initialize i(for iteration operations), size(To specify the size of the array), pos(for position of updating), key(Holds value of the updated element), arr(to create memory for holding elements in the array) 
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





//A program to update an array
#include<stdio.h> //Preprocessor directive containing the input and output functions
int main(){
	int i, size, pos, key, arr[100];//(Declaration of variables
	printf("Enter the size of the array: ");//Prompts user to define the size of array 
	scanf("%d", &size);//Stores the value input by user in the address of variable (size)
	printf("\nEnter elements of the array: \n");
	for(i=0; i<size; i++){//Loop Iteration to take user input of the elements in the array
		scanf("%d", &arr[i]);//Takes user input and stores it in the array index of the current iteration
	}
	printf("\nEnter element: ");//Prompts user to enter the element to be updated
	scanf("%d", &key);//Takes user input and stores it in the key variable address
	printf("\nEnter the update position of the array: ");//Prompts user to enter the update position of the array
	scanf("%d", &pos);//Takes user input and stores it in the pos variable address
	arr[pos-1]=key;//Assigns The position entered by the user to the key value entered by the user 
	printf("The elements after updating are: \n");//Assigns the position variable to the key value entered by the user
		printf("=====================================================================================\n");// {
		printf("	Index       |         Position         |          Element\n");
		printf("=====================================================================================\n");
	for(i=0; i<size; i++){
		printf("  	%d           |            %d             |             %d   \n", i, i+1, arr[i]);          //Table to display the index, position and elements in the array 
		printf("_____________________________________________________________________________________\n");
	}
		printf("=====================================================================================");// }
	
	return 0;
}
