#include<stdio.h>
int main()
{
	
	float price,bill,dis,nbill;
	int qty;
	printf("Price:");
	scanf("%f",&price);
	printf("Quantity:");
	scanf("%i",&qty);
	bill=price*qty;
	
	if(bill>20000)
		dis=bill*12/100;
	else if(bill>=15001)
		dis=bill*9/100;
	else if(bill>=10001)
		dis=bill*7/100;
	else if(bill>=5001)
		dis=bill*5/100;
	else
		dis=bill*3/100;
		
	nbill=bill-dis;
	printf("Bill %f\n",bill);
	printf("Discount %f\n",dis);
	printf("Net bill %f",nbill);
	return 0;
}
