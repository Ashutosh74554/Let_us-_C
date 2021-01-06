//Question 1.[F]-(d)
#include<stdio.h>
void main()
{
	float farhenheit, celsius;
	printf("Enter temperature in fahrenheit: ");
	scanf("%f", &farhenheit);
	celsius= (farhenheit-32)*5.0/9;
	printf("Temperature in centigrade: %.2f", celsius);
}
