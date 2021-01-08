//Question 2.[H]- (g)
#include<stdio.h>
#include<math.h>
void main()
{
	int a;
	printf("Enter the angle: ");
	scanf("%f", &a);
	a*=(3.1415/180.0);
	printf("Sine of angle is: %f", sin(a));
	printf("\nCosine of angle is: %f", cos(a));
	printf("\nTangent of angle is: %f", tan(a));
	printf("\nCotangent of angle is: %f", 1/tan(a));
	printf("\nSecant of angle is: %f", 1/cos(a));
	printf("\nCosecant of angle is: %f", 1/sin(a));
}
