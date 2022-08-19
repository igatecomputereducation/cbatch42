#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age:");
	scanf("%i",&age);
	if(age>=60)
		printf("Senior citizen");
	else if(age>=19)
		printf("Adult");
	else if(age>=13)
		printf("Adolescence");
	else
		printf("Children");
	return 0;
}
