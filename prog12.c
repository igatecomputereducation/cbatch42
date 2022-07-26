#include<stdio.h>
int main()
{
	int pp,sp,pro;
	printf("Purchase Price:");
	scanf("%i",&pp);
	printf("Selling Price:");
	scanf("%i",&sp);
	pro=sp-pp;
	printf("Profit %i",pro);
	return 0;
}

