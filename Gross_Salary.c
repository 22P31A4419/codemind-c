#include<stdio.h>
int main()
{
    int b,d,h;
    scanf("%d%d%d",&b,&d,&h);
    if(b<=10000)
    {
        d=0.8*b;
        h=0.2*b;
    }
    else if(b<=20000)
    {
        d=0.90*b;
        h=0.25*b;
    }
    else
    {
        d=0.95*b;
        h=0.30*b;
    }
    float gs;
    gs=b+d+h;
    printf("%0.2f",gs);
}