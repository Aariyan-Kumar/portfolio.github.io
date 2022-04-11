/*WAP to print the seriers: */
#include<stdio.h>
#include<math.h>
void main()
{
    int i,j,n,x;
    float sum=1,fact;
    printf("Enter the nth no. of the series: ");
    scanf("%d",&n);
    printf("Enter the value of x: ");
    scanf("%d",&x);
    for(i=1;i<n;i++)
    {
        fact=1;
        for(j=1;j<=i;j++)
        {
            fact=fact*j;
        }
        sum=sum+(pow(x,i)/fact);
        //printf("%d\n",x);
    }
    printf("%f",sum);
}
