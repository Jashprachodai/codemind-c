#include<stdio.h>
int fact(int n)
{
    int f=1;
    for(int i=n;i>0;i--)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int n,t,total=0;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        total=total+fact(n%10);
        n=n/10;
    }
    if(total==t)
    printf("The number %d is a strong number",t);
    else
    printf("The number %d is not a strong number",t);
}