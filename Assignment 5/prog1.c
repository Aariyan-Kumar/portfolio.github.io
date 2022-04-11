/*Print all the perfect numbers up to a given range.*/
#include<stdio.h>
void main()
{
    int i,n,sum,m,j;
    printf("Enter the range: ");
    scanf("%d%d",&n,&m);
    printf("perfect no.s are:");
    for(j=n;j<=m;j++)
    {
        sum=0;
        for(i=1;i<j;i++)
        {
            if(j%i==0)
            {
                sum+=i;
            }
        }
        if(sum==j)
        printf("%d\n",sum);
    }
}
