/*WAP to print the seriers: */
#include<stdio.h>
void main()
{
    int i,j,n,fact;
    float sum=0;
    printf("Enter the nth no. of the series: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=1;
        for(j=1;j<=i;j++)
        {
            fact=fact*j;
        }
        sum=sum+(1/(fact*1.0));
    }
    printf("%f",sum);
}
