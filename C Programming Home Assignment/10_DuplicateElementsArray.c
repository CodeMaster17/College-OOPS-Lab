// HARSSHIT YADAV
// 2105891
// Count the total number of duplicate elements in an array.
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n, j, i, count = 0;
    printf("Enter the number of elements of the array : ");
    scanf("%d", &n);
    int *ar = (int *)malloc(n * (sizeof(int)));
    printf("Enter the elements of the array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    for (i = 0; i < n; i++)
    {

        for (j = i+1; j < n; j++)
        {
            if(ar[i] == ar[j]){
                count++;
                break;
            }
        }
    }
    printf("The number of repeating elements of the array is : %d", count);

    return 0;
}