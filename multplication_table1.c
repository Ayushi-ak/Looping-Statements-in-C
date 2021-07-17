//Program to input a number from user and print multiplication table of the given number using for loop.
#include<stdio.h>
int main()

{
	int n,p,i;
	printf("\n");
	printf("Enter the range:");
	scanf("%d",&n);
	printf("\n");
    printf("The table of %d is :",n);
	for(i=1;i<=10;i++)
	{
		p=n*i; 
		printf(" %d ",p); 
    }
    printf("\n");
}
