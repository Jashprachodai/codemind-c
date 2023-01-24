#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        t=n;
        for(int j=1;j<=n;j++,t--)
        {
            printf("%d ",t);
        }
        printf("
");
    }
}