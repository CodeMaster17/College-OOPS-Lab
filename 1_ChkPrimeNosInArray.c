//HARSSHIT YADAV
//2105891
//1. write a c program to check the prime numbers in an array of 10 integers.
#include<stdio.h>
int main()
{
    int ar[10], i, j, count = 0;
    printf("enter the elements of the array");
    for(i = 0 ; i < 10 ; i++)
    {
        scanf("%d" , &ar[i]);
    }
    printf("output");
    // checking for prime nos
    for(i = 0; i < 10; i++)
    {
        for(j=1; j<= ar[i]; j++)
        {
            if(ar[i]%j == 0)
            count++;
        }
        if(count==2)
        printf("%d\n", ar[i]);

        count = 0;
    }
    return 0;
}