//Question 3.[C]- (k)
#include<stdio.h>
#include<math.h>
void main()
{
	const float x,y,r;
	float x1,y1,dist;
	printf("Enter the coordinates of the centre of circle: ");
	scanf("%f %f", &x, &y);
	printf("Enter the radius of the circle: ");
	scanf("%f", &r);
	printf("Enter coordinates of point to be checked: ");
	scanf("%f %f", &x1, &y1);
	dist= sqrt(pow(x1-x,2)+pow(y1-y,2));
	if(dist==r)
		printf("Point lies on the circle");
	else if(dist>r)
		printf("Point lies outside the circle");
	else
		printf("Point lies inside the circle");
}
