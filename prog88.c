#include<stdio.h>
int main()
{
	char ch;
	
	printf("Enter any alphabet:");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z')
		ch=ch+32;
	
	printf("%c",ch)	;
	return 0;
}
