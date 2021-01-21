//Questio 4.[D]-(c)
#include<stdio.h>
void main()
{
	int hardness, t_strength;
	float carbon;
	printf("Enter the hardness: ");
	scanf("%d", &hardness);
	printf("Enter the carbon content: ");
	scanf("%f", &carbon);
	printf("Enter the tensile strength: ");
	scanf("%d", &t_strength);
	if(hardness>50 && carbon>0.7 && t_strength>5600)
		printf("Grade 10");
	else if(hardness>50 && carbon>0.7)
		printf("Grade 9");
	else if(carbon>0.7 && t_strength>5600)
		printf("Grade 8");
	else if(hardness>50 && t_strength>5600)
		printf("Grade 7");
	else if(hardness>50 || carbon>0.7 || t_strength>5600)
		printf("Grade 6");
	else
		printf("Grade 5");
}
