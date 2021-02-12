#include<stdio.h>
#define MAX 5

int stack[MAX];
int top=-1;

void push(int data)
{
	if(top==MAX-1)
	{
		printf("stack is full.\n");
	return;
	}
	else
	{
		
		stack[++top]=data;
	}
}

int pop()
{
	int temp;
	if(top==-1)
		printf("stack is empty.\n");
	else
	{
	temp=stack[top];
       top--;
return temp;
	}
}

void peek()
{
	
	printf("%d\n",stack[top]);
}



int main()
{

push(1);
peek();
push(2);
peek();
push(3);
peek();
push(4);
peek();
push(5);

peek();

printf("deleted =%d\n",pop());

peek();


}
