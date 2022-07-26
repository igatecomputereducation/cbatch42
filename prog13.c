#include<stdio.h>
int main()
{
	int sal;
	float hra,da,gross;
	printf("Salary:");
	scanf("%i",&sal);
	hra=sal*12.0/100;
	da=sal*15.0/100;
	gross=sal+hra+da;
	printf("Payslip\n");
	printf("Salary %i\n",sal);
	printf("House Rent Allowence %f\n",hra);
	printf("Dearness Allowence %f\n",da);
	printf("Gross Salary %f\n",gross);
	return 0;
}

