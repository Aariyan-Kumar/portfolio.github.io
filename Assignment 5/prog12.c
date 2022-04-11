/*Partten Printing*/
#include<stdio.h>
void main()
{
    int i,j,l,h;
    int sp=3,k;
    for(i=1;i<=4;i++)
    {
        for(k=0;k<=sp;k++)
        {
            printf("  ");
        }
        for (j=1;j<=i;j++)
        {
            printf("%d ",j);
            h=j;
        }
        for(l=h-1;l>=1;l--)
            {
                if(i!=1)
                {
                    printf("%d ",l);
                }
            }
        printf("\n");
        sp--;
    }
}