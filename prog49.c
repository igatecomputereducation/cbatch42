#include <stdio.h>
int main()
{
    int a,b;
    
	printf("Enter 2 integers..\n");
    scanf("%i%i",&a,&b);
    
    if(a==b)
    	printf("Equals");
    if(a!=b)
    	printf("Not Equal");
    
	return 0;
}
