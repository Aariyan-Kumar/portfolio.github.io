/*WAP to find the factorial of the given no.: N*/
#include<stdio.h>
int main()
{
	int i,n,fact=1;
	printf("Enter the no. to get the factorial");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("factorial of the given no.: %d",fact);
	return 0;
}
