//Question 1.[F]- (a)
#include<stdio.h>
void main()
{
	int bs;
	double da, hra, gross;
	printf("Enter basic salary: ");
	scanf("%d", &bs);
	da=bs*40.0/100;
	hra=bs*20.0/100;
	gross= bs+da+hra;
	printf("Total salary= %.2f", gross);
}
