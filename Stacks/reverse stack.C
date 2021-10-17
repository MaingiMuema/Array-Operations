//A program to output the reverse of letters in a word  
#include<stdio.h>
#define SIZE 50//Size of stack definition
char stack[SIZE];//Declarationion of the stack
int top=-1;//Initialization of the top of array which is index 0 initially

int ifempty(){//Definition and declaration of function to check if the array is full 
	if(top==-1)//Condition to check if top of array is -1 which signifies that the array is empty
		return 1;//Returns 1 to main to signify array is empty
	else
		return 0;//Returns 0 to main to signify array is full
}

int iffull(){//Definition and declaration of function to check if the array is full
	if(top==SIZE)//Condition to check if top is equivalent to size
		return 1;//Returns 1 to the main if top equal size of array
	else
		return 0;//Returns 0 to main if top is not equavalent to size of arra
}

int peek(){//Definition and declaration of function to locate the top array element
	return stack[top];//Returns the element at the top of the stack
}

int push(char data){//Definition and declaration of function to output data
	if(iffull()==1)//Condition to check if condition  equals 1
		printf("The stack is full. Exit\n");
	else
		top=top+1;
		stack[top]=data;
}

pop(){
	if(ifempty()==1)
		printf("Stack is empty. Exit\n");
	else
		stack[top]=stack[top-1];
		char data=stack[top];
		return data;
}

int display(){
	printf("The word in a reverse order is: \n");
	for(int i=top; i>=0; i--){
		printf("%c", stack[i]);
	}
}

int main(){
	int i=0;
	char word;
	int choice, choice2;
	do{
		if(i<1){
		printf("Enter the number of the operation you want to perform: \n1. Check if full.          2. Check if empty\n");
		printf("3. Find peek               4. Remove top letter\n");
		printf("5. Add letter(s)\n");
		scanf("%d", &choice);
		switch(choice){
							case 1:
								if(iffull()==1)
									printf("\nThe stack is full. exit\n");
								else
									printf("\nThe stack is not full. exit\n");
								display();
								break;
							case 2:
								if(ifempty()==1)
									printf("\nThe stack is empty. exit\n");
								else
									printf("The stack has some elements.\n");
								display();
								break;
							case 3:
								printf("\nThe top letter is: %c\n", peek());
								display();
								break;
							case 4:
								pop();
								display();
								break;
							case 5:
								int size;
								printf("Enter the size of the word to reverse: ");
								scanf("%d", &size);
								printf("\nEnter the word characters you want to output in reverse order: ");
								for(int i=0; i<=size; i++){
									scanf("%c", &word);
									push(word);
								}
								display();
								break;
							default:
								printf("\nNo such operation. exit\n");
								
							}
		}
		else{
					printf("\nWould you like to perform any other operation?(YES/No)\nIf YES press 1\nIf NO press 0");
					scanf("%d", &choice2);
						printf("Enter the number of the operation you want to perform: \n1. Check if full.          2. Check if empty\n");
						printf("3. Find peek               4. Remove top letter\n");
						printf("5. Add letter(s)\n");
						scanf("%d", &choice);
					if(choice2==1){
						switch(choice){
							case 1:
								if(iffull()==1)
									printf("\nThe stack is full. exit\n");
								else
									printf("\nThe stack is not full. exit\n");
								display();
								break;
							case 2:
								if(ifempty()==1)
									printf("\nThe stack is empty. exit\n");
								else
									printf("The stack has some elements.\n");
								display();
								break;
							case 3:
								printf("\nThe top letter is: %c\n", peek());
								display();
								break;
							case 4:
								pop();
								display();
								break;
							case 5:
								int size;
								printf("Enter the size of the word to reverse: ");
								scanf("%d", &size);
								printf("\nEnter the word characters you want to output in reverse order: ");
								for(int i=0; i<=size; i++){
									scanf("%c", &word);
									push(word);
					
							}
							display();
							break;
							default:
								printf("\nNo such operation. exit\n");
								
							}
				}else
					printf("Exit\n");
					break;
		}
	i++;
	}while(i<5);
	
	return 0;
			
	}
	
	
	

