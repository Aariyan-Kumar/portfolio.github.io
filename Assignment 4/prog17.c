/*WAP to print table of any n no.*/
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the no. for which you want to see the table:\n");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("\n%d",(i*n));
	}
	return 0;
}
