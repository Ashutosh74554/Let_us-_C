//Question 4.[D]- (d)
#include<stdio.h>
#include<math.h>
void main()
{
	float a;
	int s;
	printf("Enter angle in degrees: ");
	scanf("%f", &a);
	s= pow(sin(a),2)+ pow(cos(a),2);
	printf("The sum is %d\n", s);
}
