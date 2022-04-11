/*WAP to find the odd no, even no, positive no, negative no present in an array*/
#include<stdio.h>
void main()
{
    int a[100],i,n,sz;
    printf("Enter the size of the array:\n");
    scanf("%d",&sz);
    printf("Enter the no.s in array\n");
    //declaration of the array
    for(i=0;i<sz;i++)
    {
        scanf("%d",&a[i]);
    }
    // even no.s
    for(i=0;i<sz;i++)
    {
        if(a[i]%2==0)
        {
            printf("Even nos");
            printf("%d\n",a[i]);
        }
    }
    // odd no.s
    for(i=0;i<sz;i++)
    {
        if(a[i]%2!=0)
        {
            printf("odd nos\n");
            printf("%d\n",a[i]);
        }
    }
    // negative no.s
    for(i=0;i<sz;i++)
    {
        if(a[i]<0)
        {
            printf("negative nos\n");
            printf("%d\n",a[i]);
        }
    }
    //positive no.s
    for(i=0;i<sz;i++)
    {
        if(a[i]>0)
        {
            printf("positive nos\n");
            printf("%d\n",a[i]);
        }
    }
}

        
        