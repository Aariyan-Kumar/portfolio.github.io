/*WAP to delete an element from an array. */
#include<stdio.h>
void main()
{
    int a[100],i,n,sz,in;
    printf("Enter the size of the array:\n");
    scanf("%d",&sz);
    printf("Enter the no.s in array\n");
    //declaration of the array
    for(i=0;i<sz;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be deleted\n");
    scanf("%d",&n);
    for(i=0;i<sz;i++)
    {
        if(a[i]==n)
        {
            in=i;
        }
    }
    printf("Array after deleting no.\n");
    for(i=in;i<sz;i++)
    {
        a[i]=a[i+1];
    }
    for(i=0;i<sz-1;i++)
    {
        printf("%d\n",a[i]);
    }
}