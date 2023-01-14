
#include<stdio.h>
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
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n;
        scanf("%d",&n);
        if(pal(n))
        printf("True
");
        else
        printf("False
");
    }
}
