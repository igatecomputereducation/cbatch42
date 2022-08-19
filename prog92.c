#include<stdio.h>
int main()
{
	char type,cat;
	int cmr,pmr,nu;
	float uch,bill;
	
	printf("Current month meter reading:");
	scanf("%i",&cmr);
	printf("Previous month meter reading:");
	scanf("%i",&pmr);
	nu=cmr-pmr;
	
	fflush(stdin);
	printf("Type of connection [d/c/i/a]");
	scanf("%c",&type);
	if(type=='d')
	{
		fflush(stdin);
		printf("Enter the category [a/b/c]:");
		scanf("%c",&cat);
		if(cat=='a')
		{
			if(nu>=51)
				uch=2.60;
			else
				uch=1.45;
		}
		else if(cat=='b')
		{
			if(nu>=200)
				uch=6.90;
			else if(nu>=100)
				uch=3.60;
			else
				uch=2.60;
		}
		else if(cat=='c')
		{
			if(nu>500)
				uch=9.95;
			else if(nu>=401)
				uch=8.50;
			else if(nu>=301)
				uch=7.95;
			else if(nu>=201)
				uch=7.10;
			else if(nu>=101)
				uch=5.40;
			else if(nu>=51)
				uch=3.35;
			else
				uch=2.65;
		}
		
	}
	else if(type=='c')
	{
		if(nu>500)
			uch=10.15;
		else if(nu>=301)
			uch=9.60;
		else if(nu>=101)
			uch=9.05;
		else if(nu>=51)
			uch=7.65;
		else
			uch=6.90;
	}
	else if(type=='i')
		uch=7.45;
	else if(type=='a')
		uch=0.50;
	
	bill=nu*uch;
	
	printf("Number of units %i\n",nu);
	printf("Unit charge %f\n",uch);
	printf("Total bill %f",bill);
	
	return 0;
}
