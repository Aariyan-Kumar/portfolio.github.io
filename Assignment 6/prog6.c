/*WAP to delete an element of given index from an array*/
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
    printf("Enter the index of the element to be deleted\n\n");
    scanf("%d",&n);
    for(i=0;i<sz;i++)
    {
        if(i==n)
        {
            printf("\n");
            continue;
        }
        printf("%d\n",a[i]);
    }
}
    