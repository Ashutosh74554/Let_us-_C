//Question 3.[C]- (h)
#include<stdio.h>
void main()
{
	float a;
	printf("Enter a number: ");
	scanf("%f", &a);
	if(a<0)
		printf("The absolute value: %f", a*(-1));
	else
		printf("The absolute value: %f", a);
}
