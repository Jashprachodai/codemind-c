#include<stdio.h>
int square(int n)
{
    for(int i=1;i<=n/2;i++)
    {
        if(i*i==n)
        {
            return 1;
        }
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(square(x[i])||x[i]==1)
        sum=sum+x[i];
    }
    printf("%d",sum);
}