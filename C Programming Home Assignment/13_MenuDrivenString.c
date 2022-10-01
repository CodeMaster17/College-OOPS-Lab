// HARSSHIT YADAV
// 2105891
// Write a menu driven program (user defined functions ) for the following string operations:-

// a) Compare two strings.
// b) Toggle case of each character of a string.
// c) Reverse order of words in a given string.
// d) Remove all repeated characters from a given string.
#include <stdio.h>
#include<string.h>
void StringComparison()
{
    char str1[20]; // declaration of char array
    char str2[20]; // declaration of char array
    int value;     // declaration of integer variable
    printf("Enter the first string : ");
    scanf("%s", str1);
    printf("Enter the second string : ");
    scanf("%s", str2);
    // comparing both the strings using strcmp() function
    value = strcmp(str1, str2);
    if (value == 0)
        printf("strings are same");
    else
        printf("strings are not same");
}
void ToggleCharacter()
{
    // Initializing variable.
    char str[100];
    int i;

    // Accepting input.
    printf("\n Please Enter any String: ");
    gets(str);

    // Initializing for loop.
    for (i = 0; str[i] != '\0'; i++)
    {
        // Toggling characters.
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;

        else if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }

    printf("\n Toglled string: %s", str);
}
void ReverseOrderString()
{
    char str[40]; // declare the size of character string
    printf(" \n Enter a string to be reversed: ");
    scanf("%s", str);

    // use strrev() function to reverse a string
    printf(" \n After the reverse of a string: %s ", strrev(str));
}
void AllRepeatedCharacters()
{
    char str[100];
    int i, j, k;

    printf("\n Please Enter any String :  ");
    gets(str);

    for (i = 0; i < strlen(str); i++)
    {
        for (j = i + 1; str[j] != '\0'; j++)
        {
            if (str[j] == str[i])
            {
                for (k = j; str[k] != '\0'; k++)
                {
                    str[k] = str[k + 1];
                }
            }
        }
    }

    printf("\n The Final String after Removing All Duplicates = %s ", str);
}
int main()
{
    int choice;
    printf("Enter your choice : \n 1.  Compare two strings. \n 2. Toggle case of each character of a string. \n 3. Reverse order of words in a given string. \n 4.Remove all repeated characters from a given  \n ");

    scanf("%d", &choice);
    if (choice == 1)
    {
        StringComparison();
    }
    else if (choice == 2)
    {
        ToggleCharacter();
    }
    else if (choice == 3)
    {
        ReverseOrderString();
    }
    else if (choice == 4)
    {
        AllRepeatedCharacters();
    }
    else
    {
        printf("Wrong  choice");
    }
    return 0;
}
