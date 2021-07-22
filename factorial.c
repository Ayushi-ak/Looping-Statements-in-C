//Program to Find Factorial of a Number
#include<stdio.h>
int main()
{
	int i,n,p=1;
	printf("\n");
	printf("Enter the integer :");
	scanf("%d",&n);
	printf("\n");
	printf("Factorial:",n);
	for(i=1;i<=n;i++)
	{
	    p = p*i;
		printf(" %d ",p);		
    }
    printf("\n");
}
