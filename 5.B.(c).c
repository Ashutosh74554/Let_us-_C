//Question 5.[B]- c
#include<stdio.h>
void main()
{
	int a,b,i;
	int power=1;
	printf("Enter the base value: ");
	scanf("%d", &a);
	printf("Enter the power: ");
	scanf("%d", &b);
	for(i=1;i<=b;i++)
		power*=a;
	printf("Result: %d", power);
}
