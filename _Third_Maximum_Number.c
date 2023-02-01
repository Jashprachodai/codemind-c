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
    int a,b;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(x[j]<x[j+1])
            {
                a=x[j];
                b=x[j+1];
                x[j]=b;
                x[j+1]=a;
            }
        }
    }
    if(n>=3)
    {    
        int c=0,k=0;
        for(int i=0;i<n;i++)
        {
            if(x[i]!=x[i+1])
            k++;
            if(k==3)
            {
                printf("%d",x[i]);
            }
        }
    }
    else
    printf("%d",x[0]);
}