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
int main()
{
    int x,c=0;
    scanf("%d",&x);
    for(int j=1;j<=x;j++)
    {
        if(x%j==0 && !prime(j))
        c++;
    }
    printf("%d",c);
}