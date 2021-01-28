//Question 5.[B]- (h)
#include<stdio.h>
void main()
{
	int num,oct=1,foct=0,rem;
	printf("Enter an integer = ");
	scanf("%d",&num);
	while(num>=8) 
	{
		rem=num%8;
		num=num/8;
		oct=(oct*10)+rem;
	}
	oct=(oct*10)+num;
	while(oct!=1) 
	{
		rem=oct%10;
		oct=oct/10;
		foct=(foct*10)+rem;
	}
	printf("The octal equivalent is %d", foct);
}
