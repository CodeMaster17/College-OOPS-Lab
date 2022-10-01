//HARSSHIT YADAV
//2105891
//WAP to find out the second smallest and second largest elements stored in an
// array of n integers without sorting the array elements.
#include<stdio.h>
int main()
{
     int i, j, limit, count = 0, position, secondMAx, element, min, secondMin;
     printf(" :enter the limit of the array :");
     scanf("%d", &limit);
     int ar[limit];
    printf("enter the elements of the array");
    for(i = 0 ; i < 10 ; i++)
    {
        scanf("%d" , &ar[i]);
    }

    // finding max element
    int max = ar[0];
    for(i = 0 ; i < 10 ; i++)
    {
        if(ar[i] > max){
            max = ar[i];
            position = i;
        }
    }
   
    for(i = 0 ; i < 10; i++)
    {
        element = ar[i];
           for(j=0; j< limit; j++)
        {
               if((element > ar[j]) && (j!= position)){
            secondMAx = element;
        }
        }
    }
   
    min = ar[0];
    for(i = 0 ; i < 10 ; i++)
    {
        if(ar[i] < max){
            min = ar[i];
            position = i;
        }
    }
   for(i = 0 ; i < 10; i++)
    {
        element = ar[i];
           for(j=0; j< limit; j++)
        {
               if((element < ar[j]) && (j!= position)){
            secondMAx = element;
        }
        }
     

    }
    printf("Second max element is : %d \n" , secondMAx);
    printf("Second min element is : %d" , secondMin);
    return 0;
}