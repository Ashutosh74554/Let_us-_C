//Question 3.[C]- (j)
#include<stdio.h>
void main()
{
	float x1,y1,x2,y2,x3,y3;
	printf("Enter coordinates of 1st point: ");
	scanf("%f %f", &x1, &y1);
	printf("Enter coordinates of 2nd point: ");
	scanf("%f %f", &x2, &y2);
	printf("Enter coordinates of 3rd point: ");
	scanf("%f %f", &x3, &y3);
	if(0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))==0)
		printf("The points fall on one straight line.");
	else
		printf("The points doesn't fall on one straight line.");
}
