/*WAP to check wheather the no. is prime or not*/
#include<stdio.h>
int main()
{
	int n, i, flag = 0;
	printf("Enter a positive integer: ");
	scanf("%d", &n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			flag++;
		}
	}
	if(flag==1)
	printf("Prime no.");
	else
	printf("Not a prime no.");
	
	return 0;
}
