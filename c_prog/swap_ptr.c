#include<stdio.h>
void swp(int *p, int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}


int main()
{
	int a=10,b=20;
	printf("before=%d %d \n", a,b );
	swp(&a,&b);
	printf("after=%d %d \n", a,b );
}
