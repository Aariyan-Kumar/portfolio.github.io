/*WAP to print HCF of 3 no.s*/
#include <stdio.h> 
 
int main() 
{ 
    int a,b,c,hcf,st,i; 
	printf("Enter three numbers : "); 
	scanf("%d%d%d",&a,&b,&c);
    for(i=1;i<=b;i++)
    {
        if(a%i==0 && c%i==0 && b%i==0)
        {
            hcf=i;
        }
    }
    printf("%d",hcf);

 return 0; 
} 