/*WAP to insert an element to a given index and find how many elements present in that array*/
#include <stdio.h>

void main()
{
    int array[100], p, i, n, v;    
    printf("Enter number of elements in the array\n");
    scanf("%d", &n);    
    printf("Enter %d elements\n", n);    
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }    
    printf("Please enter the location where you want to insert an new element\n");
    scanf("%d", &p);    
    printf("Please enter the value\n");
    scanf("%d", &v);    
    for (i=n-1; i>=p-1; i--)  
    {  
        array[i+1] = array[i];
    }    
    array[p-1]=v;    
    printf("Resultant array is\n");    
    for (i=0; i<=n; i++)
    {    
        printf("%d\n", array[i]); 
    }
}
