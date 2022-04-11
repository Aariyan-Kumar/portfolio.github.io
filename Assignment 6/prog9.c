/*WAP to reverse the elements of an array without using another array.*/
#include<stdio.h>
void main()
{
    int a[100],i,sz,m,n,t=0;
    printf("Enter the size of the array:\n");
    scanf("%d",&sz);
    printf("Enter the no.s in array\n");
    
    //declaration of the array
    
    for(i=0;i<sz;i++)
    {
        scanf("%d",&a[i]);
    }

    //reversing the array
    
    m=0;
    n=sz;
    for(i=0;i<(sz/2);i++)
    {
        t=a[i];
        a[i]=a[n-1];
        a[n-1]=t;
        m++;
        n--;
    }

    //printing the array

    for (i=0; i<sz; i++)
    {
        printf("\n%d",a[i]);
    }
    
}