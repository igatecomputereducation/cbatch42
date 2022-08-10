#include<stdio.h>
int main()
{
	char gen;
	int age;
	
	printf("Your Gender [m/f]:");
	scanf("%c",&gen);
	printf("Your Age:");
	scanf("%i",&age);
	
	if(gen=='m')
	{
		if(age>=21)
			printf("Major babu");
		else
			printf("Minor pilagadu");
	}
	else
	{	
		if(age>=18)
			printf("Major papa");
		else
			printf("Minor pilla");
	}
		
	return 0;
}
