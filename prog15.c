#include<stdio.h>
int main()
{
	int amt,time;
	float rate,si,tot;
	printf("Amount:");
	scanf("%i",&amt);
	printf("Time in months:");
	scanf("%i",&time);
	printf("Rate of interest:");
	scanf("%f",&rate);
	si=amt*time*rate/100;
	tot=amt+si;
	printf("Simple interest %f\n",si);
	printf("Total amount %f",tot);
	return 0;
}

