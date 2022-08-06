#include<stdio.h>
int main()
{
    int len,bre;
    printf("Enter length, breadth\n");
    scanf("%i%i",&len,&bre);
    if(len==bre)
    	printf("Square");
    else
    	printf("Not a square");
	return 0;
}
