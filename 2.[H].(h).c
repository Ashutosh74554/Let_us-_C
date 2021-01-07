//Question 2.[H]- (h)
#include<stdio.h>
void main()
{
	int a,b,temp;
	printf("Enter 2 numbers: ");
	scanf("%d %d", &a, &b);
	temp=a;
	a=b;
	b=temp;
	printf("After swapping: %d %d", a, b);
}
