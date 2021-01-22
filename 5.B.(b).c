//Question 5.[B]- b
#include<stdio.h>
void main()
{
	int fact=1, num;
	printf("Enter an integer: ");
	scanf("%d", &num);
	int i;
	for(i=1;i<=num;i++)
		fact*=i;
	printf("Factorial of %d: %d", num, fact);
}
