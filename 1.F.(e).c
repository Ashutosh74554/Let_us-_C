//Question 1.[F]-(e)
#include<stdio.h>
void main()
{
	float l,b,r;
	printf("Enter length and breadth of rectangle: ");
	scanf("%f%f", &l, &b);
	printf("Enter radius of circle: ");
	scanf("%f", &r);
	printf("Area of rectangle: %.2f", l*b);
	printf("\nPerimeter of rectangle: %.2f", 2*(l+b));
	printf("\nArea of circle: %.2f", 3.14*r*r);
	printf("\nCircumference of circle: %.2f", 2*3.14*r);
}
