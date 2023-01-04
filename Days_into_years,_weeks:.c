#include<stdio.h>
int main()
{
    int da;
    scanf("%d",&da);
    int y,w;
    y=da/365;
    w=(da%365)/7;
    printf("%d
%d",y,w);
}