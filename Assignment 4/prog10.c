/*WAP to find the prime no.s in the given range */
#include <stdio.h>
int main()
{
   int n1, n2, flag, i, j;
   printf("Enter two range(input integer numbers only):");
   scanf("%d %d", &n1, &n2);
   printf("Prime numbers from %d and %d are:\n", n1, n2);
   for(i=n1+1; i<n2; ++i)
   {
      flag=0;
      for(j=2; j<=i/2; ++j)
      {
         if(i%j==0)
         {
            flag=1;
            break;
         }
      }
      if(flag==0)
         printf("%d\n",i);
  }
  return 0;
}