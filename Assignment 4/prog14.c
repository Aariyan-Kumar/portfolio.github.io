/*WAP to print the no.s like 22,33,44, till < 1000*/
#include<stdio.h>
int main()
{
	int i,j,r1=0,r2=0,r3=0,s;
	for(i=10;i<1000;i++)
	{
		r1=i%10;
		s=0;
		for(j=i;j!=0;j/=10)
		{
			r2=j%10;
			if(r2!=r1)
			{
				s++;
				break;
			}
		}
		if(s==1)
		{
			continue;
		}
		else
		printf("%d\n",i);
	}
	return 0;
	
}
