#include<stdio.h>
int main()
{
	int x,m=1;
	printf("enter the x value:");
	scanf("%d",&x);
/*
	if(x%2==1)
	{
		x=x^1;
		printf("value dec by 1 == %d\n",x);
	}
	else
	{
		while(!(x&1))
		{
			x=x^m;
			m<<=1;
		}
		
	}*/

	printf("added by 1 == %d\n",-(~x));
}

