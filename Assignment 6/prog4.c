/*WAP to find the minimum, maximum and average of an array.*/
#include<stdio.h>
void main()
{
    int a[100],i,n,sz,min,max;
    float avg=0,sum=0;
    printf("Enter the size of the array:\n");
    scanf("%d",&sz);
    printf("Enter the no.s in array\n");
    //declaration of the array
    for(i=0;i<sz;i++)
    {
        scanf("%d",&a[i]);
    }
    max = a[0];
    min = a[0];
    for(i=0;i<sz;i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
        if(a[i] < min)
        {
            min = a[i];
        }
        sum+=a[i];
    }
    printf("Max no. is %d\n",max);
    printf("Min no. is %d\n",min);
    avg=sum/sz;
    printf("Average no. is %f\n",avg);
}

