//WAP to add 2 matrix and store in 3rd matrix.
#include<stdio.h>
void main()
{
    int a[100][100],b[100][100],c[100][100],i,j,m,n;
    //input rows and col
    printf("Enter the no. of rows and col: \n");
    scanf("%d%d",&m,&n);
    //input in array
    printf("Enter the no.s in 1st array: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the no.s in 2nd array: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    // adition of the matrix
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
