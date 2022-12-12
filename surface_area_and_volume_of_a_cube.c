#include<stdio.h>
int main()
{
    float a;
    scanf("%f",&a);
    float surfarea,vol;
    surfarea=6*a*a;
    vol=a*a*a;
    printf("Surface area = %.f and Volume = %.f",surfarea,vol);
}