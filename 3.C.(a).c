//Question 3.[C]- (a)
#include<stdio.h>
void main()
{
	float cp,sp;
	printf("Enter cost price of the item: ");
	scanf("%f", &cp);
	printf("Enter selling price of the item: ");
	scanf("%f", &sp);
	if(sp>=cp)
	{
		printf("Your profit is: Rs. %.2f", sp-cp);
	}
	else
	{
		printf("Your loss is: Rs. %.2f", cp-sp);
	}
	
}
