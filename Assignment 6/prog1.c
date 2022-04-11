/*WAP to update particular location of an array with a given value*/
#include<stdio.h>
void main()
{
    int a[100],i,j,n,sz;
    printf("Enter the size of the array:\n");
    scanf("%d",&sz);
    printf("Enter the no.s in array\n");
    for(i=0;i<sz;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the location and no. to update the value:\n");
    scanf("%d%d",&j,&n);
    if(j<=5)
    {
        for(i=0;i<sz;i++)
        {
            if(i==j-1)
            {
                a[i]=n;
            }
        }
        printf("Updated array\n");
        for(i=0;i<sz;i++)
        {
            printf("%d\n",a[i]);
        }
    }
    else
    printf("Enter index out of range\n");
}