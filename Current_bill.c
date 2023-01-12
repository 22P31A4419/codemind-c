#include<stdio.h>
int main()
{
    int units,uc=0;
    scanf("%d",&units);
    float b,sr,tb;
    if(units<200)
    {
        b=units*1.20;
    }
    else if(units>=200&&units<400)
    {
        b=units*1.50;
    }
    else if(units>=400&&units<600)
    {
        b=units*1.80;
    }
    else
    {
        b=units*2.00;
    }
    if(units>=400)
    {
        sr=b*0.15;
        tb=b+sr;
        printf("%0.2f",tb);
    }
    else
    {
        tb=b+100;
        printf("%0.2f",tb);
    }
}