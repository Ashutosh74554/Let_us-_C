//Question 3.[C]- (i)
#include<stdio.h>
void main()
{
	float l,b,area,peri;
	printf("Enter length of rectangle: ");
	scanf("%f", &l);
	printf("Enter breadth of rectangle: ");
	scanf("%f", &b);
	area=l*b;
	peri=2*(l+b);
	printf("Area= %.3f", area);
	printf("Perimeter= %.3f", peri);
	if(area>peri)
		printf("\nArea is greater than perimeter");
	else if(area<peri)
		printf("\nPerimeter is greater than area");
	else
		printf("Area and perimeter are same");
}
