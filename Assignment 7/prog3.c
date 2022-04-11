//WAP to find min and max in 2d array
#include<stdio.h>
void main()
{
    int a[100][100],i,j,m,n,min=0,max=0;
    //input rows and col
    printf("Enter the no. of rows and col: \n");
    scanf("%d%d",&m,&n);
    //input in array
    printf("Enter the no.s in array: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    //finding min and max
    min=a[0][0];
    max=a[0][0];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
            }
            if(a[i][j]<min)
            {
                min=a[i][j];
            }
        }
    }
    printf("%d is max no. in 2d array\n",max);
    printf("%d is min no. in 2d array\n",min);
}
