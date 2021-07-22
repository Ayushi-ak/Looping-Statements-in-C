//Program to Reverse a Number
#include<stdio.h>
int main()
{
	int n,rem,rev=0;
	printf("\n");
	printf("Enter the integer :");
	scanf("%d",&n);
	printf("\n");
	printf("The reversed number of %d is :",n);
	while(n!=0)
	{
		rem = n%10;
	    rev=rev*10+rem;
		n = n/10;	
    }  
    printf(" %d ",rev);
    printf("\n");
}
