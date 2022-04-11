/*Find the least number that can be divided by 3 given numbers.*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,p,g,i;
    printf("Enter the 3 no.s: ");
    scanf("%d%d%d",&a,&b,&c);
    p=a*b*c;
    if(a>b && a>b)
    {
        g=a;
    }
    else
    {
        if(a>b)
        g=a;
        else
        g=b;
    }
    for(i=g;i<=p;i=i+g)
    {
        if(i%a==0 &&i%b==0 && i%c==0)
        {
            break;
        }
    printf("%d",i);
    return 0;
    }
}
