//Question 3.[C]- (l)
#include<stdio.h>
void main()
{
	float x,y;
	printf("Enter the coordinates of the point: ");
	scanf("%f %f", &x, &y);
	if(x==0 && y==0)
		printf("Point lies on origin");
	else if(x==0 && y!=0)
		printf("Point lies on Y-axis");
	else if(y==0 && x!=0)
		printf("Point lies on X-axis");
	else
		printf("Point doesn't lie on any of the axes");
}
