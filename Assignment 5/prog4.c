/*WAP to print the following series: 1 9 25 49 81.........*/
#include<stdio.h>
void main()
{
    int i,n,c=1;
    printf("enter the n th of series: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d  ",(c*c));
        c+=2;
    }
}