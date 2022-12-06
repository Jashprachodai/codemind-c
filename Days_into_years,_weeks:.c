#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int yr,week;
    yr=n/365;
    week=(n%365)/7;
    printf("%d
%d",yr,week);
}