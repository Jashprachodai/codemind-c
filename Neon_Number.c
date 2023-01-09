#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int t=n;
    n=n*n;
    int sum=0;
    while(n!=0)
    {
        sum=sum+(n%10);
        n=n/10;
    }
    if(t==sum)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}