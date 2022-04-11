/*WAP to calculate the sum of the series n no.s*/
#include <stdio.h>
int main()
{
    int n,i,c=1;
    float sum=0.0;
    printf("Enter the nth value of series");
    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {
        sum+=(float)(i/c);
        c+=2;
    }
    printf("the sum of n no.s = %d",sum);
}
