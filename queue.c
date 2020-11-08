/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define MAX 50

int queue[MAX];
int front = -1;
int rear = -1;

void insert()
{
	int element;
	if(rear==MAX-1)
		printf("Queue Overflow!\n");
	else
	{
		if(front==-1)
			front=0;
			printf("Enter the element to be inserted into the Queue: ");
			scanf("%d",&element);
			queue[++rear]=element;
			printf("Element successfully inserted!!!\n");
	}
}

void delete()
{
	if(front==-1||front>rear)
	{
		printf("Queue underflow!\n");
	}
	else
	{
		printf("Deleted Element: %d\n",queue[front++]);
		if(front>rear)
		{
			front=-1;
			rear=-1;
		}
	}
}

void display()
{
	int i;
	if(front==-1)
	{
		printf("Queue is empty!\n");
	}
	else
	{
		printf("Elements in the Queue are : \n");
		for(i=front;i<=rear;i++)
			printf("\n%d",queue[i]);	
	}
}

int main()
{
	int choice;
	
	while(1)
	{
		printf("\n\n");
		printf("Choose any one to continue:\n");
		printf("(1)INSERT\n(2)DELETE\n(3)DISPLAY\n(4)EXIT");
		printf("\nEnter you choice: ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				insert();
				break;
			case 2:
				delete();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(1);
			default:
				printf("Invalid choice!\n");
		}	
	}
	return 0;
}