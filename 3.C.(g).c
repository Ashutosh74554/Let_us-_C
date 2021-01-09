//Question 3.[C]- (g)
#include<stdio.h>
void main()
{
	float a,b,c;
	printf("Enter the 3 angles of triangle: ");
	scanf("%f %f %f", &a, &b, &c);
	if((a+b+c)==180)
		printf("The triangle is valid");
	else
		printf("This is not a valid triangle");
	
}
