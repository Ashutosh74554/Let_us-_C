//Question 3.[C]- (f)
#include<stdio.h>
void main()
{
	int a1,a2,a3,min;
	printf("Enter age of Ram: ");
	scanf("%d", &a1);
	printf("Enter age of Shyam: ");
	scanf("%d", &a2);
	printf("Enter age of Ajay: ");
	scanf("%d", &a3);
	if(a1<a2)
	{
		if(a1<a3)
			printf("Ram is youngest");
		else if(a1==a3)
			printf("Ram and Ajay are youngest");
		else
			printf("Ajay is youngest");		
	}
	else if(a1==a2)
	{
		if(a1<a3)
			printf("Ram and Shyam are youngest");
		else if(a1==a3)
			printf("All have the same age");
		else
			printf("Ajay is youngest");	
	}
	else
	{
		if(a2<a3)
			printf("Shyam is youngest");
		else if(a2==a3)
			printf("Shyam and Ajay are youngest");
		else
			printf("Ajay is youngest");
	}
	
}
