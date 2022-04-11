/*pratten printing*/
#include<stdio.h>
void main()
{
    int i,j,sp=0,k,c=0;
    for(i=1;i<=5;i++)
    {
        for(k=0;k<sp;k++)
        {                                       
            printf(" ");
        }
        for (j=5;j>=i;j--)
        {
            if(c%2==0)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
            c++;
        }
        printf("\n");
        sp++;
    }
}