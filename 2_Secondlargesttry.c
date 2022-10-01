// HARSSHIT YADAV
// 2105891
// WAP to find out the second smallest and second largest elements stored in an
//  array of n integers without sorting the array elements.
#include <stdio.h>

int main()
{
    int limit, i, j, secmax, secmin;
    printf("enter the limit of array:");
    scanf("%d", &limit);
    int ar[limit];
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &ar[i]);
    }
    int max = ar[0];
    for(i = 0; i < limit; i++)
    {
        if (ar[i] > max)
        {
            max = ar[i];
            
        }
    }
    for(i = 0; i < limit; i++)
    {
        for(j = 0; j < limit; j++)
        {
            if((ar[j] > ar[i]) && (ar[j] < max )){
                secmax = ar[j];
            }
        }
    }


    // finding minimum
    int min = ar[0];
    for(i = 0; i < limit; i++)
    {
        if (ar[i] < min)
        {
            min = ar[i];
            
        }
    }
    printf("the minimum number is : %d", min);
    for(i = 0; i < limit; i++)
    {
        for(j = 0; j < limit; j++)
        {
            if((ar[j] < ar[i]) && (ar[j] > min )){
                secmin = ar[j];
            }
        }
    }
    printf("second max element is: %d \n", secmax);
    printf("second min element is: %d \n", secmin);
    return 0;
}