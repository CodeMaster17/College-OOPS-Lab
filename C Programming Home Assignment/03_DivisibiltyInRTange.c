//HARSSHIT YADAV
//2105891
//WAP to print the numbers which are divisible by 7 and 13 within a range.
#include<stdio.h>
int main()
{
    int start, end, i;
    printf("Enter the starting point : ");
    scanf("%d", &start);
    printf("Enter the ending point : ");
    scanf("%d", &end);
    for(i = start;i<=end;i++)
    {
        if(i%7 == 0 && i %13 == 0)
        {
            printf(" %d\n ", i);
                }
    }
    return 0;
}