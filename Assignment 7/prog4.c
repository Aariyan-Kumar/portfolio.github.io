//Q4 WAP to find the sum of right dignoal and left diagnoals
#include<stdio.h>
void main()
{
    int a[100][100],i,j,m,n,rd=0,ld=0;
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
    // finding the diagnols
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                rd=rd+a[i][j];
            }
            if((i+j)==(m-1))
            {
                ld=ld+a[i][j];
            }
        }
    }
    printf("Sum of right diagnal: %d",rd);
    printf("Sum of left diagnal: %d",ld);
}