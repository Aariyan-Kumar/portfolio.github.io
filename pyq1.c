/*Define a structure for storing student data comprising of RollNo, Name, Branch Code, and
CGPA. Write a program to enter the data of  students using array of student structures.
The program should print a merit list, i.e., the data of students sorted on the basis of CGPA
in descending order.*/
#include<stdio.h>
struct Student
{
    char Name[50];
    char BranchCode[50];
    int RollNo;
    float CGPA;
};
void main()
{
    struct Student st[5];
    int i,temp,k,j;


    // input the data value

    printf("Enter the name of Students:\n");
    for(i=0;i<5;i++)
    {
        scanf("%s",&st[i].Name);
    }
    printf("Enter the roll no.:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&st[i].RollNo);
    }
    printf("Enter the Branch code: \n");
    for(i=0;i<5;i++)
    {
        scanf("%s",&st[i].BranchCode);
    }
    printf("Enter the CGPA \n");
    for(i=0;i<5;i++)
    {
        scanf("%f",&st[i].CGPA);
    }

    // sorting
    for (i = 0; i < 4; i++) {
    k = i;
    for (j = i + 1; j < 5; j++)
    {
        if (st[k].CGPA < st[j].CGPA)
            k = j;
    }
        if (k != i) 
        {
            temp = st[i].CGPA;
            st[i].CGPA = st[k].CGPA;
            st[k].CGPA = temp;
        }
    }
    for ( i = 0; i < 5; i++)
    {
        printf("%s\t%f\n",st[i].Name,st[i].CGPA);
    }
    


}