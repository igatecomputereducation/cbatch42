#include<stdio.h>
int main()
{
	int cmr,pmr,nu;
	float bill;
	printf("This month reading:");
	scanf("%i",&cmr);
	printf("Last month reading:");
	scanf("%i",&pmr);
	nu=cmr-pmr;
	bill=nu*5.75;
	printf("Number of units consumed %i\n",nu);
	printf("Total bill %f",bill);
	return 0;
}

