//Written by Mark Maingi
//DATE: 06/10/2021




//*****Search algorithm******

/*
  -Start
  -initialize i(for iteration operations), pos(for position of insertion), key(for the element of insertion), arr(to create memory for holding elements in the array), size(To specify the size of the array)
  -prompt user to enter size of the array
  -Prompt user to enter the elements in the array
  -for(i=0; i<size; i++)
  		Takes user input for elements in array
  -Prompt user to enter element to be inserted
  -Prompt user to enter position of insertion
  -for(i=size; i>pos-1; i++)
  		arr[i]=arr[i-1]
  -Size++
  -arr[pos-1]=key
  -for(i=0; i<size; i++)
  		print ("Elements in the array")
  -Stop		  			
*/



//*****The program******

//Program to insert an element at a position specified by the user
#include<stdio.h>// Preprocessor directive containing the input and output function
int main(){
	int i, pos, key, arr[50], size;//Declaration of variables
	printf("Enter the size of the array: ");//Prompts user to input size of the array
	scanf("%d", &size);
	printf("\nEnter the elements in the array: \n");
	for(i=0; i<size; i++){//Loop Iteration to take user input of the elements in the array
		scanf("%d",&arr[i]);//Takes user input and stores it in the array index of the current iteration
	}
	printf("\nEnter the element to be inserted: ");//Prompts user to enter the element to be inserted
	scanf("%d", &key);//Takes user input and assigns it to the key variable
	printf("\nEnter the position of insertion: ");//Prompts the user to enter the position where the element is to be inserted
	scanf("%d", &pos);//Takes in user input of the position of insertion
	for(i=size; i>pos-1; i--){//Loop iteration to move the elements 
		arr[i]=arr[i-1];
	}
	size++;//Increases the size of the array entered by the user by one since an element has been added
	arr[pos-1]=key;//Assigns The position entered by the user to the key value entered by the user 
	printf("\nThe elements in the array after insertion are: ");//Alerts the user to anticipate the elements in the array after insertion has been done
	for(i=0; i<size; i++){//Loop iteration to display elements in the array
		printf("%d\n", arr[i]);//Displays the elements in the array After insertion
	}
	return 0;//This returns 0 to the Operating System to show successful execution of the program
}
