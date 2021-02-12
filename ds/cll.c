#include<stdio.h>
#include<stdlib.h>

struct cll
{
	int data;
	struct cll *next;
};

struct cll *add_last(struct cll *ptr)
{
	struct cll *nu = (struct cll *)malloc(1 * sizeof(struct cll ));
	struct cll *temp=NULL;
	printf("enter the data:");
	scanf("%d",&nu->data);

	if(ptr==NULL)
	{
		ptr=nu;
		nu->next=ptr;
	}
	else
	{
		temp=ptr;
		while(temp->next!=ptr)
		{
			temp=temp->next;
		}
		nu->next=temp->next;
		temp->next=nu;
	}

	return ptr;

}

void display(struct cll *ptr)
{
	struct cll *temp=ptr;
printf("cll data:");
if(temp->next==ptr)
{
	printf("%d",temp->data);
}
	else{
	while(temp->next != ptr)
	{
		printf(" %d  ",temp->data);
		temp=temp->next;
	}
	}
	printf("\n");
}

struct cll *delete(struct cll *ptr)
{
	struct cll *temp=ptr;
	struct cll *pre=NULL;

	while(temp->next!=ptr)
	{
		pre=temp;
		temp=temp->next;
	}

	if(temp->next== ptr && pre)
	{
		pre->next =temp->next;
		free(temp);
		temp=NULL;
	}

	else
	{
		free(ptr);
		ptr=NULL;
	}


	return ptr;

}


int main()
{
	struct cll *head=NULL;
	int ch;
while(1){
	printf("1)add_last\n2)display\n3) delete\n4) exit\n");
	printf("enter the choice:");
	scanf("%d",&ch);

	switch(ch)
	{
		case 1:
			head=add_last(head);break;
		case 2:if(head==NULL)
			       printf("circular linked list is Empty.\n");
		       else
				display(head);break;
		case 3:
		
			head=delete(head);break;
		case 4:
			exit(0);
	}
}
}
