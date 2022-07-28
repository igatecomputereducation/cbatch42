#include<stdio.h>
int main()
{
	int num;
	printf("Enter any decimal number:");
	scanf("%i",&num);
	printf("Octal %#o\n",num);
	printf("Hexa-decimal %#X",num);
	return 0;
}
