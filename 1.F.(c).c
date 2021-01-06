//Question 1.[F]-(c)
#include<stdio.h>
void main()
{
	int m1,m2,m3,m4,m5;
	printf("Enter marks in 1st subject: ");
	scanf("%d", &m1);
	printf("Enter marks in 2nd subject: ");
	scanf("%d", &m2);
	printf("Enter marks in 3rd subject: ");
	scanf("%d", &m3);
	printf("Enter marks in 4th subject: ");
	scanf("%d", &m4);
	printf("Enter marks in 5th subject: ");
	scanf("%d", &m5);
	printf("Total marks obtained: %d", m1+m2+m3+m4+m5);
	printf("\nPercentage obtained: %.2f", (m1+m2+m3+m4+m5)/5.0);	
}
