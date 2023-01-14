#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=0,b=1,c=0;
    while(c<=n)
    {
        a=b;
        b=c;
        c=a+b;
    }
    if((n-b)<(c-n))
    printf("%d",b);
    else if((n-b)>(c-n))
    printf("%d",c);
    else if((n-b)==(c-n))
    printf("%d %d",b,c);
}