#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define max_size 5
int stack[max_size],top=-1;
int a[10],n;
void push();
void pop();
void palindrome();
void display();

void push() //Inserting element into the stack
{
int item;
if(top==(max_size-1))
printf("\nStack Overflow:");
else
{
printf("Enter the element to be inserted:\t");
scanf("%d",&item);
top=top+1;
stack[top]=item;
}
}
void pop() //deleting an element from the stack
{
int item;

if(top==-1)
printf("Stack Underflow:");
else
{
item=stack[top];
top=top-1;
printf("\nThe poped element: %d\t",item);
}
}
void display()		//Display function
{
	int i;
	if(top == -1)
		printf("Stack Empty\n");
	else
	{
		printf("Elements Are:\n");
		for(i=top;i>=0;i--)
			printf("%d\n",stack[i]);
	}
}
void palindrome()		//Palindrome
{
	int k,len=top+1,rev[max_size],i,j=0;
	if(top == -1)
		printf("Stack Empty\n");
	else
	{
		printf("Array elements are : \n");	//displaying array elements
		for(i=top;i>=0;i--)
			printf("%d\t",stack[i]);
		for(k=len-1;k>=0;k--,j++)	//performing reverse operation 
			rev[k]=stack[j];				
		printf("\n reverse array : \n");
		for(k=0;k<len;k++)
			printf("%d\t",rev[k]);
		for(i=0;i<len;i++)		//check for palindrome 
			if(stack[i]!=rev[i])
				break;
		if(i==len)
			printf("\n It is palindrome number\n");
		else
			printf("\n It is not a palindrome number\n");
	}
getch();
}
int main()
{
	int choice;
	while(1)
	{
		printf("\n\n--------STACK OPERATIONS-----------\n");
		printf("1.Push\n");
		printf("2.Pop\n");
		printf("3.Palindrome\n");
		printf("4.Display\n");
		printf("5.Exit\n");
		printf("-----------------------");
		printf("\nEnter your choice:\t");
		scanf("%d",&choice);
		switch(choice)
		{          case 1:push(); break;
			case 2:pop();  break;
			case 3:palindrome(); break;
			case 4:display(); break;
			case 5:exit(0);
			default:printf("\nInvalid choice:\n");
		}
}
}
