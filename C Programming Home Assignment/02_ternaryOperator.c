//HARSSHIT YADAV
//2105891
//WAP in C using ternary operator to find the Greatest Among Three Numbers
#include<stdio.h>
int main()
{
    int a,b,c,big;
    printf("enter the three nos:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    big = (a > b) ? a : b;
    big = (big > c) ? big : c;
    printf("The bigeest among the three is :%d", big);
    return 0;
}