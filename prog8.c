#include<stdio.h>
int main()
{
	int ln,br,ar,pr;
	
	printf("Length:");
	scanf("%i",&ln);
	printf("Breadth:");
	scanf("%i",&br);
	
	ar=ln*br;
	pr=2*(ln+br);
	
	printf("Area of rectangle %i\n",ar);
	printf("Perimeter of rectangle %i",pr);	
	return 0;
}

