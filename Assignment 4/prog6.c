/*WAP to find the sum of the given integer N*/
#include<stdio.h>
int main()
{
	int i,n,sum=0,r;
	printf("Enter the no.");
	scanf("%d",&n);
	for(i=n;i!=0;i/=10)
	{
		r=i%10;
		sum=sum+r;
	}
	printf("thesum is equal to %d",sum);
	return 0;
}
