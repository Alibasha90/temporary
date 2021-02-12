#include<stdio.h>
#include<stdlib.h>

struct st
{
	int data;
	struct st *next;
};

struct st *front=NULL;
struct st *rare=NULL;

void queue(struct st v)
{
	struct st *nu=(struct st *)calloc(1,1* sizeof(struct st));
	nu->data = v.data;
	if(nu==NULL)
	{
		printf("memory not allocated.\n");
		return;
	}
	if(front==NULL)
	{
		front=nu;
		rare=nu;		
	}
	else
	{
		rare->next=nu;
		rare=nu;
	}

}
void deque()
{
	struct st *temp=NULL;
if(front==NULL && rare==NULL)
{
	printf("queue is empty.\n");
}


else if(front==rare)
	{
		free(front);
		rare=NULL;
		front=NULL;
		
	}

	else
	{	
		printf("deleted =%d\n",front->data);
		temp=front;

		front=front->next;
		free(temp);
		temp=NULL;
}
}
void display()
{
	struct st *temp=NULL;

	temp=front;
	while(temp)
	{
		printf("queue data=%d\n",temp->data);
		temp=temp->next;
	}
}

int main()
{
	struct st v;
	int n;
	while(1)
	{
		printf("1)enque\n2)deque\n3)display\n4)exit\n");
		printf("enter the option:");
		scanf("%d",&n);
		switch(n)
		{
			case 1:printf("enter the data:");
			       scanf("%d",&v.data);
			       queue(v);break;
			case 2:
			       deque(v);break;
			case 3:
			       display(v);break;
			case 4: exit(0);

		}
	}
}
