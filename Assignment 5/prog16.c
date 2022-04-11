/*
Write a program that will read x and compute sin (x) an cos(x) Hints: Use Taylor’s series expansion
*/
#include<stdio.h>
#include<math.h>
void main()
{
    int i,j,n,x,p=1;
    float sum=0,fact,cos=0,sin=0;
    printf("Enter the nth no. of the series: ");
    scanf("%d",&n);
    printf("Enter the value of x: ");
    scanf("%d",&x);
    for(i=1;i<=n;i++)
    {
        fact=1;
        for(j=1;j<=i;j++)
        {
            fact*=j;
        }
        if(p%2==0)
        {
            cos=cos+(pow(x,))
        }
        else
        {

        }
    }
}