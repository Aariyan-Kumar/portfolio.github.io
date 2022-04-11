/*Merge two sorted array storing it in another array in sorted order.*/
#include<stdio.h>
void main()
{
    int a[100],b[100],c[200],i,n,sz1,sz2,in;
    printf("Enter the size of the 1st array:\n");
    scanf("%d",&sz1);
    printf("Enter the no.s in 1st array\n");

    //accepting data in 1st array
    
    for(i=0;i<sz1;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the size of the 2nd array:\n");
    scanf("%d",&sz2);
    printf("Enter the no.s in 2nd array\n");
    //accepting data in 2nd array

    for(i=0;i<sz2;i++)
    {
        scanf("%d",&b[i]);
    }
    
}