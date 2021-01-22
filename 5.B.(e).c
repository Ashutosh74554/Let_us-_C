//Question 5.[B]- e
#include<stdio.h>
void main()
{
	int num=1, rem, sum, num1;
	while(num<=500)
	{
		num1=num;
		sum=0;
		while(num1)
		{
			rem=num1%10;
			sum+=(rem*rem*rem);
			num1/=10;
		}
		if(num==sum)
			printf("%d is an Armstrong number\n", num);
		num++;
	}
}
