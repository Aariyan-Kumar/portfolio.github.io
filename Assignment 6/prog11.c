/*WAP to search an element from an array using binary search*/
#include <stdio.h>
void main()
{
    int i, f, l, m, n, key, a[100];
    //size of the array
    printf("Enter size of the array\n");
    scanf("%d", &n);
    //Data collection in array
    printf("Enter the no.s in the array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    //asking for the searching element
    printf("Enter value to find\n");
    scanf("%d", &key);
        
    f = 0;
    l = n - 1;
    m = (f+l)/2;
    //Binary Search begins
    while (f <= l)
    {
        if (a[m] < key)
        {
            f = m + 1;
        }
        else if (a[m] == key)
        {
            printf("%d found at location %d.\n", key, m+1);//printing the location of key.
            break;
        }
        else
        {
            l = m - 1;
        }
        m = (f + l)/2;
    }
    if (f > l)
    {
        printf("Not found! %d isn't present in the list.\n", key);
    }
}