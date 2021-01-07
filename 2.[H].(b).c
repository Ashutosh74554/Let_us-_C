//Question 2.[H]- (b)
#include<stdio.h>
void main()
{
	int n,rev,rem;
	printf("Enter a 5 digit number: ");
	scanf("%d", &n);
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	printf("Reverse of the number: %d", rev);
}
