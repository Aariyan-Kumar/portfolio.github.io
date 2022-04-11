/*WAP to find the Amgstron no.or not
Amgstron no.= 153
(1*1*1)+(5*5*5)+(3*3*3)=153.
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int i,r,sum=0,n;
	printf("Enter the no. to check for Amgstron: ");
	scanf("%d",&n);
	for(i=n;i!=0;i/=10)
	{
		r=i%10;
		sum+=pow(r,3);
	}
	if(n==sum)
	printf("the no. is Amgstron");
	else
	printf("the no. is not Amgstron");
	
	return 0;
}
