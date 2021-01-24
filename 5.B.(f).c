//Question 5.[B]- (f)
#include<stdio.h>
void main()
{
	int matchstick=21, choice, comp;
	while(matchstick>0)
	{
		printf("How many matchsticks do you pick (1-4): ");
		scanf("%d", &choice);
		if(choice>4 || choice<1)
		{
			printf("Wrong choice");
			break;
		}
		comp=5-choice;
		printf("Computer's choice: %d\n", comp);
		matchstick=matchstick-comp-choice;
		if(matchstick==1)
		{
			printf("\nRemaining matchstick is 1");
			printf("\nYou lose");
			break;
	    }
	}	
}
