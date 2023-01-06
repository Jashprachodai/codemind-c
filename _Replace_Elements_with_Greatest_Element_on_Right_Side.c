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
    int m;
    for(int i=0;i<n-1;i++)
    {
        m=x[i+1];
        for(int j=i+1;j<n-1;j++)
        {
            if(m<x[j])
            m=x[j];
        }
        x[i]=m;
    }
    for(int i=0;i<n-1;i++)
    {
        printf("%d ",x[i]);
    }
    printf("-1");
}