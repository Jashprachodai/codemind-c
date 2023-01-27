#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d",&n);
    for(int i=1,t=n;i<=n;i++,t--)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==i||j==n-i+1)
            printf("%d ",t);
            else
            printf(" ");
        }
        printf("
");
    }
}