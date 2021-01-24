//Question 5.[B]- (g)
#include<stdio.h>
void main()
{
	int n,pos=0,neg=0,zero=0 ;
	char opt='Y';
	while(opt=='y' || opt=='Y')
	{
		printf("Enter integer: ");
		scanf("%d", &n);
		if(n>0)
			pos++;
		else if(n<0)
			neg++;
		else
			zero++;
		printf("Do you want to continue(Y/N): ");
		scanf(" %c", &opt);
	}
	printf("\nPositive Numbers :%d\nNegative Numbers :%d\nZero Numbers :%d", pos, neg, zero);
}
