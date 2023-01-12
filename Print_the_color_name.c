#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch=='V')
    {
        printf("VIOLET");
    }
    else if(ch=='I')
    {
        printf("INDIGO");
    }
    else if(ch=='B')
    {
        printf("BLUE");
    }
    else if(ch=='G')
    {
        printf("Green");
    }
    else if(ch=='Y')
    {
        printf("Yellow");
    }
    else if(ch=='R')
    {
        printf("RED");
    }
    else
    {
        printf("-1");
    }
}