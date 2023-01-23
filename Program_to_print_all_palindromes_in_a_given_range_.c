#include<stdio.h>
int pal(int n)
{
    int x=0,t=n;
    while(n!=0)
    {
        x=x*10+n%10;
        n=n/10;
    }
    if(t==x)
    return 1;
    else
    return 0;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        if(pal(i))
        printf("%d ",i);
    }
}