#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d",&n);
    for(int i=n;i>0;i--)
    {
        t=n-i+1;
        for(int j=1;j<=i;j++,t++)
        {
            printf("%d ",t);
        }
        printf("
");
    }
}