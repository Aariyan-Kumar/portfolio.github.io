/*WAP to print no.s which are divisible by the sum of its digits*/
#include<stdio.h>
int main()
{
	int i,j,r=0,s=0,n;
	printf("enter the no.");
	scanf("%d",&n);
	for(j=n;j!=0;j/=10)
	{
		r=j%10;
		s=s+r;
	}
	for(i=1;i<=10000;i++)
	{
		if(i%s==0)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
