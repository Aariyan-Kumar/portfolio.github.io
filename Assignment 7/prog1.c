//WAP to to accept no. in 2d array and display it.
#include<stdio.h>
void main()
{
    int a[100][100],i,j,m,n;
    //input rows and col
    printf("Enter the no. of rows and col: \n");
    scanf("%d%d",&m,&n);
    //input in array
    printf("Enter the no.s in array");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    //printing array
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}