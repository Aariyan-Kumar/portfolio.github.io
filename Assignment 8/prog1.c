//WAP to find the length of the string without using library functions
#include<stdio.h>
void main()
{
    int i,c=0;
    char str[50];
    printf("Enter the string: \n");
    gets(str);
    for ( i = 0; str[i]!='\0'; i++)
    {
        c++;
    }
    printf("%d the length of the string",c);
}