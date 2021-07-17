// Program to print all odd numbers from 1 to n using for loop.
#include<stdio.h>
int main()
{
	int n,i;
	printf("\n");
	printf("Enter the range:");
	scanf("%d",&n);
	printf("\n");
	printf("The odd numbers between 1 to %d are:",n);
	for(i=1;i<=n;i++)
	{
        if(i%2!=0)
	    {
            printf(" %d ",i);
        }
    }
    printf("\n");
}
