//HARSSHIT YADAV
//2105891
//Count frequency of each character in a string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i, j, count = 1;
    printf("Enter the string : ");
    gets(str);
    // scanf("%s", str);
    int length = strlen(str);

    for(i = 0; i< length; i++)
    {
        for(j = i+1; j < length; j++)
        {
            if(str[i] == str[j])
            {
                count++;
            }
        }
        printf("The frequency of the character %c in the given string is : %d \n", str[i], count);
        count = 0;
    }
    return 0;
}