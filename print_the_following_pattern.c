#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int t=64+n;
    for(int i=1;i<=n;i++,t--)
    {
        for(int j=i;j<=n;j++)
        {
            printf("%c ",t);
        }
        printf("
");
    }
    
}