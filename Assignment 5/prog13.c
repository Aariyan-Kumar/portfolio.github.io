/*Print Pascal Triangle*/
/* Dry run is important!!*/
#include<stdio.h>
void main()
{
    int i,sp,j,a,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(j=1; j<=n; j++)
    {
        a=1;
        for( i=1; i<=j; i++)
        {
        printf("%d ",a);
        a = a * (j-i)/i;
        }
        printf("\n");
    }
}