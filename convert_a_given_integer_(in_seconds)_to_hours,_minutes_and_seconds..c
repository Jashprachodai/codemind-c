#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int hr=n/3600;
    int min=(n%3600)/60;
    int sec=(n%3600)%60;
    printf("H:M:S-%d:%d:%d",hr,min,sec);
}