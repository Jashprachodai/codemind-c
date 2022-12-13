#include<stdio.h>
int main()
{
    float s,a,b;
    scanf("%f%f%f",&s,&a,&b);
    printf("%.2f
%.2f",s*0.12,a+b+s+(s*0.12));
}