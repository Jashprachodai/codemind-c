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
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        if(prime(i))
        printf("%d
",i);
    }
}