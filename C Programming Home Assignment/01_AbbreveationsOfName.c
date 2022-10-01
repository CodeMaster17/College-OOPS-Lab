//HARSSHIT YADAV
//2105891
//Convert a Person’s Name in Abbreviated form.
#include<stdio.h>
int main()
{
    int i;
    char name[19] = " Bhanu Pratap Singh";
    printf("Name of %s in abbreviated form is:\n", name
    );
    for(int i = 0; i<19; i++ )
    {
        if(name[i] == ' '){
            printf("%c.", name[i+1]);

        }   
    }
    return 0;
}