/*WAP to print nth digit from the right*/
#include<stdio.h>
int main()
{
	int i,n,sum=0,r,c=0,x;
	printf("Enter the no.");
	scanf("%d",&n);
	printf("Enter the nth no.of digit");
	scanf("%d",&x);
	for(i=n;i!=0;i/=10)
	{
		c++;
		r=i%10;
		if(c==x)
		{
			printf("%d",r);
			break;
		}
	}
	return 0;
}
