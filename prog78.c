#include<stdio.h>
int main()
{
	int age;
	char gen;
	float per;
	
	printf("Gender [m/f]:");
	scanf("%c",&gen);
	printf("Age:");
	scanf("%i",&age);
	printf("Percentage:");
	scanf("%f",&per);
	
	if(gen=='f' && age>=30 && age<=45 && per>=70)
		printf("Selected");
	else
		printf("Not selected");
	
	
	return 0;
}
