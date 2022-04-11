/*WAP to find the perfect square of even no. */
#include<stdio.h> 
int main() 
{ 
int max,i; 
printf("Enter the number upto which the squares of even number to be printed:"); 
scanf("%d",&max); 
for(i=1;i<=max;i++) 
{ 
  if(i%2==0) 
    printf("%d ",i*i);
} 
} 
