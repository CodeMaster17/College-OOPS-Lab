//HARSSHIT YADAV
//2105891
//WAP to enter a five digit number and print the below structure
// For example the no is :45678

// 4 5 6 7 8
// 5 6 7 8 4
// 6 7 8 4 5
// 7 8 4 5 6
// 8 4 5 6 7
#include<stdio.h>
int main()
{
   int ar[] = {4, 5, 6, 7, 8};    
int i = 0, j, k;
for( i = 0; i< 5; i++)
{
    for(j = i; j < 5; j++)
    {
        printf("%d ", ar[j]);
    }
    for( k = 0; k <i ;k++)
    {
        printf("%d ", ar[k]);
    }
    
    printf("\n");
}
   return 0;
}