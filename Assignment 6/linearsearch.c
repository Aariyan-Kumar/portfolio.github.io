/*WAP to perform Linear search*/
#include<stdio.h>
void main()
{
     int a[100],i,n,sz,in,c=0;
    printf("Enter the size of the 1st array:\n");
    scanf("%d",&sz);
    printf("Enter the no.s in array\n");

    //accepting data in array
    
    for(i=0;i<sz;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the no. to search:\n");
    scanf("%d",&n);
    // linear search

    for(i=0;i<sz;i++)
    {
        if(a[i]==n)
        {
            c=1;
            in=i;
            break;
        }
    }
    if(c!=0)
    {
        printf("location of search no. %d",(in+1));

    }
    else
    {
        printf("entered element not found");
    }
}