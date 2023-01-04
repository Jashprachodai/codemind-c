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
    scanf("%d",&m);
    int max=x[0];
    for(int i=0;i<n;i++)
    {
        if(max<x[i])
        max=x[i];
    }
    for(int i=0;i<n;i++)
    {
        if(m+x[i]>=max)
        printf("True ");
        else
        printf("False ");
    }
}