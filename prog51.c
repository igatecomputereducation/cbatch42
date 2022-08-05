#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two integers\n");
    scanf("%i%i",&a,&b);
    
	if(a==b)
    	printf("Equal");
    if(a>b)
    	printf("Biggest number %i",a);
    if(b>a)
    	printf("Biggest number %i",b);
    	
	return 0;
}
