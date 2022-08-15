#include<stdio.h>
int main()
{
	int a,b,c,d;
	a=30!=80 || 40<80 && 50==60;
	b=40/2>17%5 && 15<=30/2;
	c=10==10 && 20!=10 || 20>80;
	d=10!=10 || 60!=20 && 20>20;
	printf("%i\n%i\n%i\n%i",a,b,c,d);
	return 0;
}
