//HARSSHIT YADAV
//2105891
// Define a structure of employee having data members: empID, name, address,
// age and salary. Write a program to read the empID, name, address, and salary of
#include<stdio.h>
struct employee
{
    int id,age,salary;
    char name[25], address[100];
}emp[100];

void main()
{
    struct employee t;
    int i,n,j;
    printf("Enter the no of employees\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter employee id\n");
        scanf("%d",&emp[i].id);

        printf("\nEnter employee name\n");
        scanf("%s",&emp[i].name);

        printf("\nEnter employee age\n");
        scanf("%d",&emp[i].age);

        printf("\nEnter employee salary\n");
        scanf("%d",&emp[i].salary);
        
        printf("\nEnter employee address\n");
        scanf("%s",&emp[i].address);
    }

    // sorting the array
    for(i=0;i<n;i++)
     {
          for(j=i+1;j<n;j++)
          {
               if(strcmp(emp[i].name,emp[j].name)>0)
               {
                    t=emp[i];
                    emp[i]=emp[j];
                    emp[j]=t;
               }
          }
     }
    printf("\nEMP NAME\tEMP NAME\tEMP AGE\t\tEMP SAL\t\tEMP ADDRESS\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t\t%s\t\t%d\t\t%d\t\t%s\n",emp[i].id,emp[i].name,emp[i].age,emp[i].salary,emp[i].address);
    }
}