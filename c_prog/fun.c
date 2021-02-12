#include<stdio.h>

void f1();
int main()
{
	f1();

	void f1();  // nothing will print .,,, this will not invoke fun.

}

void f1()
{
	printf("this sunction\n");
}
