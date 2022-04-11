/*
WAP to print the fibonaci series
0 1 1 2 3 5 8 13 21...........
*/
#include<stdio.h>
int main()
{
	int i,a=0,b=1,c,n;
	printf("Enter the nth no.");
	printf("fibonaci Series: \n");
	scanf("%d",&n);
	printf("%d  %d  ",a,b);
	for(i=2;i<n;++i)
	{
		c=a+b;
		printf("%d  ",c);
		a=b;
		b=c;
	}
	return 0;
}

