/*
WAP find out a 4 digit number AABB which is a perfect square where 
AA and BB are also perfect square
*/
#include<stdio.h>
#include<math.h>
void main(void)
{
    int f,l,i,r1=0,r2=0;
    for(i=1000;i<=9999;i++)
    {
        int n=i,sq=sqrt(n);
        f=n%100;
        r1=sqrt(f);
        l=n/100;
        r2=sqrt(l);
        if(sq*sq==n && r1*r1==f && r2*r2==l)
        {
            printf("%d\n",i);
        }
        
    }
}
