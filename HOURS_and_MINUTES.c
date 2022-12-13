#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int hr,min;
    hr=n/60;
    min=n%60;
    printf("%d Hour(s) %d Minute(s)",hr,min);
}