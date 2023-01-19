#include<stdio.h>
int main()
{
    int n,r,t,x=0;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n%10;
        x=x*10+r;
        n=n/10;
    }
    if(x==t)
    printf("True");
    else
    printf("False");
}
