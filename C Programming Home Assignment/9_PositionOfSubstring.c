//HARSSHIT YADAV
//2105891
//WAP to find the position of substring in a given string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100], find[100], tool[100]; 
    printf("Enter the sentence : ");
    scanf("[^\n]%*c", &str);
    int length = strlen(str);
    // printf("Enter the string to be find : ");
    // scanf("%s", &find);
    int substrLen = strlen(find), i, j;

    // STORING THE CHARACTERS OF STRING AS AN ARRAY
    char *ch=(char*)malloc(length*sizeof(char));
    for(i = 0; i< length; i++){
        if(str[i] == " "){
            ch[i] = " ";
        }
        else
        ch[i] = str[i];
    }

    printf("The given string : ");
    for(i = 0; i < length; i++ )
    {
        // for(j = 0; j < substrLen; j++ ); 
        // {

        // }
        printf("%s", ch[i]);
    }
    return 0;
}