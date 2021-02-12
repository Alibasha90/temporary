#include<stdio.h>
int main()
{
	int i,j,N,temp;
	printf("how many elements=");
	scanf("%d",&N);

	int arr[N];

	for(i=0;i<N;i++)
	{
		printf("enter the arr[%d]",i);
		scanf("%d",&arr[i]);
	}

//	printf("\noutput of array\n");
/*
	for(i=0;i<N;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
*/
	for(i=0;i<N-1;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
printf("sorted array\n");
	for(i=0;i<N;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");


printf("2 big = %d %d\n",arr[i-1],arr[i-2]);

}
