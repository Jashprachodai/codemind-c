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
    int max=0,c;
    for(int i=0;i<n;i++)
    {
        c=0;
        for(int j=0;j<n;j++)
        {
            if(x[i]==x[j])
            c++;
        }
        if(c==1)
        {
            if(max<x[i])
            max=x[i];
        }
    }
    if(max==0)
    printf("-1");
    else
    printf("%d",max);
}