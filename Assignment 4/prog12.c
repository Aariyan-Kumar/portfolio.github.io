/*
WAP to Find the nearest number to 1000, which is less than 1000 and divisible by 18 and 32.
*/
#include<stdio.h>
void main()
{
    int i;
    for(i=1000;i>=1;i--)
    {
        if(i%18==0 && i%32==0)
        {
            printf("%d",i);
            break;
        }
    }
}
