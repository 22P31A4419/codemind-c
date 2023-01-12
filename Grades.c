#include<stdio.h>
int main()
{
    int p,c,b,m,cs;
    scanf("%d%d%d%d%d",&p,&c,&b,&m,&cs);
    if((p+c+b+m+cs)/5>=90)
    {
        printf("Grade A");
    }
    else if((p+c+b+m+cs)/5>=80)
    {
        printf("Grade B");
    }
    else if((p+c+b+m+cs)/5>=70)
    {
        printf("Grade C");
    }
    else if((p+c+b+m+cs)/5>=60)
    {
        printf("Grade D");
    }
    else if((p+c+b+m+cs)/5>=50)
    {
        printf("Grade F");
    }
    else
    {
        printf("-1");
    }

}