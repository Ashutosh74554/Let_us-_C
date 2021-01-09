//Question 3.[C]- (c)
#include<stdio.h>
void main()
{
	int year;
	printf("Enter the year: ");
	scanf("%d", &year);
	if(year%4==0)
		printf("Its a leap year");
	else
		printf("Its not a leap year");
}
