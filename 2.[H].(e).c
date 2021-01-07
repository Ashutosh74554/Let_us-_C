//Question 2.[H]- (e)
#include<stdio.h>
#include<math.h>
void main()
{
	float l1,l2,g1,g2,D;
	printf("Enter latitude values: ");
	scanf("%f %f", &l1, &l2);
	printf("Enter longitude values: ");
	scanf("%f %f", &g1, &g2);
	D= 3963* acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1));
	printf("DIstance in nautical miles: %f", D);
}
