#include<stdio.h>
#include<stdlib.h>
struct st
{
	int data;
	struct st *next;
};

struct st *top=NULL;

void push(struct st v)
{
	struct st *nu=(struct st *)malloc(1* sizeof(struct st));

	nu->data = v.data;

	if(nu==NULL)
	{
		printf("memory not allocated.\n");
		return;
	}

	else
	{
		nu->next=top;
		top=nu;

	}


}

void pop()
{
	struct st *temp=NULL;

	if(top==NULL)
	{
		printf("stack is empty.\n");
	}
	else
	{
		printf("deleted =%d\n",top->data);
		temp=top;

		top=top->next;
		free(temp);
		temp=NULL;
	}

}

void peek()
{
	struct st *temp=NULL;

	temp=top;
	while(temp)
	{
		printf("stack on top value=%d\n",temp->data);
		temp=temp->next;
	}
}



int main()
{
	struct st v;
	int n;
	while(1)
	{
		printf("1)push\n2)pop\n3)peek\n4)exit\n");
		printf("enter the option:");
		scanf("%d",&n);
		switch(n)
		{
			case 1:printf("enter the data:");
			       scanf("%d",&v.data);
			       push(v);break;
			case 2:
			       pop(top);break;
			case 3:
			       peek(top);break;
			case 4: exit(0);



		}
	}
}
