#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long int x[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&x[i]);
    }
    long long int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+x[i];
    }
    printf("%lld",sum);
}