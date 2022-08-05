#include <stdio.h>
int main()
{
    int n;
    
	printf("Enter any integer:");
    scanf("%i",&n);
    
    if(n==0)
    	printf("zero");
    if(n>0)
    	printf("Positive number");
    if(n<0)
    	printf("Negative number");
    
	return 0;
}
