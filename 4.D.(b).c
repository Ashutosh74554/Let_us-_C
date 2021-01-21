//Questio 4.[D]-(b)
#include<stdio.h>
void main()
{
	char a;
	int x;
	printf("Enter a character: ");
	scanf("%c", &a);
	x=(int)a;
	if(x>=65 && x<=90)
		printf("Its a capital letter");
	else if(x>=97 && x<=122)
		printf("Its a small letter");
	else if(x>=48 && x<=57)
		printf("Its a digit");
	else if((x>=0 && x<=47) || (x>=58 && x<=64) || (x>=91 && x<=96) || (x>=123 && x<=127))
		printf("Its a special symbol");
}
