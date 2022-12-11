#include<stdio.h>
int main()
{
    float s;
    scanf("%f",&s);
    if(s<=10000)
    {
        printf("%.2f",s*2);
    }
    else if(s<=20000)
    {
        printf("%.2f",s*1.15+s);
    }
    else if(s>20000)
    {
        printf("%.2f",s*1.25+s);
    }
}