//Question 2.[H]- (d)
#include<stdio.h>
#include<math.h>
void main()
{
	float x,y;
	printf("Enter coordinates of the point: ");
	scanf("%f %f", &x, &y);
	printf("Polar coordinates are: %f , %f", sqrt((x*x)+(y*y)), atan(y/x));
}
