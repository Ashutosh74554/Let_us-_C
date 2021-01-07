//Question 2.[H]- (a)
#include<stdio.h>
void main()
{
	int n,rem,sum;
	printf("Enter a 5 digit number: ");
	scanf("%d", &n);
	while(n>0)
	{
		rem=n%10;
		sum+=rem;
		n/=10;
	}
	printf("Sum of the digits: %d", sum);
}
