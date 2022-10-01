//HARSSHIT YADAV
//2105891
//WAP to replace all vowels from a string with its immediate consonant.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],c;
    int i;
    printf("Enter the string : ");
    scanf("%s", &str);
    for(i = 0; i < strlen(str); i++)
    {
        c = str[i];
        switch(c){
            case 'a':
            {
                str[i] = 'b';
                break;
            }
            case 'e':
            {
                str[i] = 'f';
                break;
            }
            case 'i':
            {
                str[i] = 'j';
                break;
            }
            case 'o':
            {
                str[i] = 'p';
                break;
            }
            case 'u':
            {
                str[i] = 'v';
                break;
            }
        }
    }
    printf("%s", str);
   

    return 0;
}