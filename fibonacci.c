#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=0,b=1,c=0,x=1;
    while(x<=n)
    {
        a=b;
        b=c;
        printf("%d ",c);
        c=a+b;
        x++;
    }
}