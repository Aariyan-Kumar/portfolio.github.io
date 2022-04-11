/*WAP to print the given partten*/
#include<stdio.h>
void main()
{
    int i,j,sp=4,k;
    for(i=1;i<=10;i+=2)
    {
        for(k=0;k<=sp;k++)
        {
            printf(" ");
        }
        for (j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
        sp--;
    }
}