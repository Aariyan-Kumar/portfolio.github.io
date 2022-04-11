/*WAP to find second smallest element present in an array*/
#include<stdio.h>
void main()
{
    int a[100],n;
    int i, j, k, temp=0;
    printf("Enter the size of the aay:\n");
    scanf("%d",&n);
    printf("Enter the no.s in aay\n");
    //declaration of the array
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i = 0; i < (n - 1); i++) {
        k = i;
        for (j = i + 1; j < n; j++) {
            if (a[k] > a[j])
                k = j;
        }
        if (k != i) {
            temp = a[i];
            a[i] = a[k];
            a[k] = temp;
        }
    }
    printf("The 2nd smallest element is %d",a[1]);
}