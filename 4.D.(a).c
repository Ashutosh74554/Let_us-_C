//Questio 4.[D]-(a)
#include<stdio.h>
void main()
{
	int year, days;
	printf("Enter the year: ");
	scanf("%d", &year);
	printf("How many days in this year: ");
	scanf("%d", &days);
	if(year%4==0 && days==366)
		printf("Its a leap year");
	else
		printf("Its not a leap year");
}
