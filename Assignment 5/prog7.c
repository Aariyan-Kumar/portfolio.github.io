/*Print given partten*/
#include<stdio.h>
void main()
{
    int i,j,sp=0;
    for(i=1;i<=5;i++)
    {
        for (j=5;j>=i;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}