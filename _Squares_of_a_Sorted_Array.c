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
    for(int i=0;i<n;i++)
    {
        x[i]=x[i]*x[i];
    }
    int a,b;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(x[j]>x[j+1])
            {
                a=x[j];
                b=x[j+1];
                x[j]=b;
                x[j+1]=a;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",x[i]);
    }
}