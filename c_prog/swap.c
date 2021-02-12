#include<stdio.h>
int main()
{

	int a=10,b=20,temp;

	printf("before swap=%d %d\n",a,b);
/*------------------- method ->1-----------------------
	temp=a;
	a=b;
	b=temp;*/


/*--------------------method  ->2----------------------------
a=a+b;
b=a-b;              
a=a-b;

*///----------------------------------------------------

/*	a=a*b;
	b=a/b;
	a=a/b;         method ->3        */

//====================== method-4 =============================

	a=a^b;
	b=a^b;
	a=a^b;

	printf("after swap=%d %d\n",a,b);
}
