/*Partten Printting*/
#include<stdio.h>
void main()
{
    char i,j,l,h;
    int sp=3,k;
    for(i='A';i<='D';i++)
    {
        for(k=0;k<=sp;k++)
        {
            printf(" ");
        }
        for (j='A';j<=i;j++)
        {
            printf("%c",j);
            h=j;
        }
        for(l=h-1;l>='A';l--)
            {
                if(i!='A')
                {
                    printf("%c",l);
                }
            }
        printf("\n");
        sp--;
    }
}