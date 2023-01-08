#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n,p=1;
        scanf("%d",&n);
        for(int i=n;i>0;i--)
        {
            p=p*i;
        }
        printf("%d
",p);
    }
}