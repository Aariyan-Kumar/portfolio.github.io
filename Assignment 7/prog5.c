// multiplication of 2 matrix
#include<stdio.h>
void main()
{
    int a[100][100],b[100][100],c[100][100],i,j,m,n,k;
    //input rows and col
    printf("Enter the no. of rows and col: \n");
    scanf("%d%d",&m,&n);
    //input in 1st array
    printf("Enter the no.s in 1st array: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    //input in 2nd array
    printf("Enter the no.s in 2nd array: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    //multiplication of matrix
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }    
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