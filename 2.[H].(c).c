//Question 2.[H]- (c)
#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,s,area;
	printf("Enter 3 sides of a traingle: ");
	scanf("%f %f %f", &a, &b, &c);
	s=(a+b+c)/2;
	area= sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area of triangle is: %.2f", area);
	
}
