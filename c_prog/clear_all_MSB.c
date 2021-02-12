#include<stdio.h>
int main()
{
	int data;
	int pos,i;

	printf("enter the data,pos :");
	scanf("%d %d",&data,&pos);

	printf("your data:\n");
	for(i=31;i>=0;i--)
	{
		printf("%d",(data>>i)&1);
	}

	for(i=0;i<=31 && i < pos;i++)
	{
		data=data|(1<<i);
	}

	printf("\n");
	printf("modified data:\n");
	for(i=31;i>=0;i--)
	{
		printf("%d",(data>>i)&1);
	}
}
		
