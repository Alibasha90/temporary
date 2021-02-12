#include<stdio.h>
int main()
{
	int i,n;

	int fact=1;
	printf("enter the n !=");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("factorial=%d\n",fact);
}
