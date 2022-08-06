#include<stdio.h>
int main()
{
	int qty;
    float price,bill,dis,nbill;
	printf("Price:");
    scanf("%f",&price);
    printf("Quantity:");
    scanf("%i",&qty);
    bill=price*qty;
    
    if(bill>1500)
    	dis=bill*7/100;
    else
    	dis=bill*3/100;
    nbill=bill-dis;
	printf("Total bill %.2f\n",bill);
	printf("Discount %.2f\n",dis);
	printf("Net bill %.2f",nbill);
	return 0;
}
