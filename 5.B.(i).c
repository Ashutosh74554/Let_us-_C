//Question 5.[B]- (i)
#include<stdio.h>
void main()
{
	int n;
	printf("How many integers do you want to input: ");
	scanf("%d", &n);
	int a[n+1], i=0;
	while(i<n)
	{
		printf("Enter the integer: ");
		scanf("%d", &a[i]);
		i++;
	}
	final(a,n);
}
void final(int arr[], int n)
{
	int i,j, min=arr[0], max=arr[0];
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	int range;
	range=arr[n-1]-arr[0];
	printf("Range = %d", range);
}
