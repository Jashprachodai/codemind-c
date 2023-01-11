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
    int min=x[0];
    for(int i=0;i<n;i++)
    {
        if(x[i]<min)
        min=x[i];
    }
    int c;
    for(int k=min;k>0;k--)
    {
        c=0;
        for(int i=0;i<n;i++)
        {
            if(x[i]%k==0)
            {
                c++;
            }
        }
        if(c==n)
        {
            printf("%d",k);
            break;
        }
    }
}