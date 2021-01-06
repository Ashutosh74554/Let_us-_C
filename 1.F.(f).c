//Question 1.[F]-(f)
#include<stdio.h>
void main()
{
	int l=1189,b=841,i;
	printf("A(0): %dmm * %dmm", l, b);
	for(i=0;i<=8;i++)
	{
		int temp= b;
		b=l/2;
		l=temp;
	    printf("\nA(%d): %dmm * %dmm", i, l, b);
	}
}
