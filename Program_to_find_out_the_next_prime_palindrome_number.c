#include<stdio.h>
int prime(int n)
{
    int fc=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        fc++;
    }
    if(fc==2)
    return 1;
    else
    return 0;
}
int pal(int n)
{
    int x=0,t=n;
    while(n!=0)
    {
        x=x*10+(n%10);
        n=n/10;
    }
    if(t==x)
    return 1;
    else
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=n+1;;i++)
    {
        if(pal(i)&&prime(i))
        {
            printf("%d",i);
            return 0;
        }
    }
}