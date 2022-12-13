#include<stdio.h>
int main()
{
    float r;
    scanf("%f",&r);
    float area,per;
    area=3.14*r*r;
    per=2*r*3.14;
    printf("%.2f
%.2f",area,per);
}