//A program to perform several stack functions, that is: isempty(), isfull(), peek(), pop(), push();
#include<stdio.h>
#define SIZE 20
int stack[SIZE];
int top=-1;

int isempty(){
	if(top==-1){
		return 1;
	}
	else{
		return 0;
	}
}

int isfull(){
	if(top==SIZE){
		return 1;
	}
	else{
		return 0;
	}
}

int peek(){
	return stack[top];
}

int pop(){
	if(top==-1){
		printf("Could not print any data, stack is empty.\n");
	}
	else{
		int data;
		data=stack[top];
		top--;
		return data;
	}
}

int push(int data){
	if(isfull()){
		printf("The stack is full, cannot store more data.\n");
	}
	else{
		top=top+1;
		stack[top]=data;
	}
}

int display(){
	int i;
	for(i=top; i>=0; i--){
		printf("%d\n", stack[i]);
	}
}

int main(){
	if(isfull()==1){
		printf("The stack is full\n");
	}
	else{
		printf("The stack is not full. More elements can be added\n\n");
	}
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	printf("The elements after first pop operation: \n");
	display();
	push(60);
	printf("The elements after second push operation: \n");
	display();
	pop();
	printf("The elements after pop operation: \n");
	display();
		
	return 0;
}
