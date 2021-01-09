//Question 3.[C]- (d)
#include<stdio.h>
void main()
{
	int num,n,rev=0,rem;
	printf("Enter a 5 digit number: ");
	scanf("%d", &num);
	n=num;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	printf("The reversed number is: %d", rev);
	if(rev==num)
		printf("\nIts a pallindrome number");
	else
		printf("\nIts not a pallindrome number");
}
