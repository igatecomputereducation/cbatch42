#include<stdio.h>
int main()
{
	int n,fi,se,th,fo;
	printf("Enter any 4 digit number:");
	scanf("%i",&n);
	fo=n%10;
	n=n/10;
	th=n%10;
	n=n/10;
	se=n%10;
	n=n/10;
	fi=n%10;
	if(fi==fo && se==th)
		printf("Palindrome");
	else
		printf("Not a palindrome");
	return 0;
}
