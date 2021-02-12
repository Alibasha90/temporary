#include <stdio.h>
void Test(int n)
{
	int i = 0;
	int arr[n];
	for (i=0; i<n; i++)
	{
		arr[i] = i;
		printf("%d ",arr[i]);
	}
}
int main()
{
	Test(3);
	return 0;
}
