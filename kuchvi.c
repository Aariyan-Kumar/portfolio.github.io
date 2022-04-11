// create struct with person1 variable
#include<stdio.h>
int main() 
{
	int i,a=65,j;
  for(i=4;i>=1;i--)
  {
	  for(j=1;j<=i;j++)
	  printf("%c",a+i-1);
	  printf("\n");
  }
  
}