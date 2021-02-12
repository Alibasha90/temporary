#include<stdio.h>
int main()
{
	int data,cnt=0,i;
	printf("enter the data:\n");
	scanf("%d",&data);

	for(i=31;i>=0;i--)
	{
		if( (data>>i)&1 )
		{
			cnt++;
		}
	}
	for(i=31;i>=0;i--)
	{
		printf("%d",(data>>i)&1 );
	}


	printf("\ncount of set bits =%d\n",cnt);
}

