/*WAP to multiply the content of two array and store the result in third array*/
#include<stdio.h>
void main()
{
	int i,ar1[100],ar2[100],mul[100],sz;
    printf("Enter the size of the array:\n");
    scanf("%d",&sz);
    //first array
	printf("Enter first array:-\n");
	for(i=0;i<sz;i++)
	{
		scanf("%d",&ar1[i]);
	}
    //Second array
	printf("Enter second array:-\n");	
	for(i=0;i<sz;i++)
	{
		scanf("%d",&ar2[i]);
	}
	//multiplication
	for(i=0;i<sz;i++)
	{
		mul[i]=ar1[i]*ar2[i];
	}
	
	printf("Multiplication of arrays:-");	
	for(i=0;i<sz;i++)
	{
		printf("\n%d",mul[i]);	
	}
		
}