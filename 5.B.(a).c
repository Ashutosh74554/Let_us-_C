//Question 5.[B]- a
#include<stdio.h>
void main()
{
	int ot=0, workhours, othours, i, sal;
	printf("Enter salary: ");
	scanf("%d", &sal);
	printf("Enter hours worked: ");
	scanf("%d", &workhours);
	othours= workhours-40;
	for(i=0;i<othours;i++)
		ot+=12;
	printf("Your overtime salary : %d", ot);
	printf("\nTotal salary including overtime: %d", sal+ot);
}
