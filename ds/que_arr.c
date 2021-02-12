#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int queue[MAX];
int front,rare=-1;

void enque()
{
int data;
	if(rare==MAX-1)
	{
		printf("queue is full.\n");
	return;
	}

	printf("enter the data:");
	scanf("%d",&data);
	if(front== -1)
		front=0;
	
	else
	{
		
		queue[++rare]=data;
	}
}

void deque()
{
	int temp;
	if(front == -1)
		printf("queue is empty.\n");
	temp=queue[front];
	if(front != rare)
	{
	front++;
	printf("deleted= %d\n",temp);
	}
	else
	{
		printf("\n\ndeleted %d\n",queue[front]);
		front=rare=-1;
	}
}

void display()
{
int i=front;
printf("queues strored :\n");
while(i<=rare)
{	
	printf("%d\t",queue[i]);
	i++;
}
}



int main()
{

	int ch;
	while(1)
	{
printf("\n\n---------------------------------------------\n");
printf("1)enque\n2)deque\n3)display\n4)exxit\n");
printf("select the option:");
scanf("%d",&ch);
		switch(ch)
		{
		case 1:enque();break;
		case 2:deque();break;
		case 3:display();break;
		case 4:exit(0);
		}
	}



}
