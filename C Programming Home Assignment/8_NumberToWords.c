//HARSSHIT YADAV
//2105891
// Write program to print the word format of a four digit number.
#include<stdio.h>
int main()
{
    int num, i ;
    printf(" Enter the number : ");
    scanf("%d", &num);
    for(i = 1000 ; i >0 ; i/=10)
    {
        
        switch(num / i){
            case 1:
            {
                printf(" one ");
                break;
            }
            case 2:
            {
                printf(" two ");
                break;
            }
            case 3:
            {
                printf(" three ");
                break;
            }
            case 4:
            {
                printf(" four ");
                break;
            }
            case 5:
            {
                printf(" five ");
                break;
            }
            case 6:
            {
                printf(" six ");
                break;
            }
            case 7:
            {
                printf(" seven ");
                break;
            }
            case 8:
            {
                printf(" eight ");
                break;
            }
            case 9:
            {
                printf(" nine ");
                break;
            }
            case 0:
            {
                printf(" zero ");
                break;
            }
        }
        num = num % i;
    }
    return 0;
}