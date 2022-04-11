/*WAP to solve the following series 1+7+49+343+.......+nth*/
#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,sum=0;
	printf("Enter the limit of the series: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("h");
		sum=sum+pow(7,i);
	}
	printf("Seriers value = %d",sum);
	return 0;
}
