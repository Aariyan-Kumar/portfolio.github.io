/*WAP to update the content of an array when element value is given. */
#include<stdio.h>
void main()
{
    int a[100],i,n,sz;
    printf("Enter the size of the array:\n");
    scanf("%d",&sz);
    sz=sz+1;
    printf("Enter the no.s in array\n");
    for(i=0;i<sz-1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the no. to update the value in array:\n");
    scanf("%d",&n);
    a[sz-1]=n;
    printf("%d",sz);
    printf("Updated array\n");
    for(i=0;i<sz;i++)
    {
        printf("%d\n",a[i]);
    }
}