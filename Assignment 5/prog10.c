/*pratten printing*/
#include<stdio.h>
void main()
{
    int i,j,sp=0,k;
    for(i=1;i<=5;i++)
    {
        for(k=0;k<sp;k++)
        {
            printf(" ");
        }
        for (j=5;j>=i;j--)
        {
            printf("%d ",i);
        }
        printf("\n");
        sp++;
    }
}