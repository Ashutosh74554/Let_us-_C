//Question 1.[F]- (b)
#include<stdio.h>
void main()
{
	float dist;
	printf("Enter distance in kilometres: ");
	scanf("%f", &dist);
	printf("Distance in metres: %.2f metres", dist*1000);
	printf("\nDistance in feet: %.3f feet",dist*3280.84);
	printf("\nDistance in inches: %.3f inches", dist*39370.1);
	printf("\nDistance in centimetres: %.3f centimetres", dist*100000);
	
}
