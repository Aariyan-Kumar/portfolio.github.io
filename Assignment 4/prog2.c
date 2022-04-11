/*WAP to calculate the sum of square of the n no.s*/
#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the nth value of series");
    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {
        sum+=(i*i);
    }
    printf("the sum of n no.s = %d",sum);
}
