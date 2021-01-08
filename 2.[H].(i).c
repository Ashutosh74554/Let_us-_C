//Question 2.[H]-(i)
#include<stdio.h>
void main()
{
	int one, two, five, ten, fif, hun, a;
	printf("Enter the amount: ");
	scanf("%d", &a);
	if(a>100)
	{
		hun=a/100;
		a%=100;
    }
    if(a>50 && a<100)
    {
    	fif=a/50;
    	a%=50;
	}
	if(a>10 && a<50)
	{
		ten=a/10;
		a%=10;
	}
	if(a>5 && a<10)
	{
		five=a/5;
		a%=5;
	}
	if(a>2 && a<5)
	{
		two=a/2;
		a%=2;
	}
    one=a;
	printf("Minimun notes required are: %d hundred, %d fifty, %d ten, %d five, %d two and %d one notes", hun, fif, ten, five, two, one);	
}
