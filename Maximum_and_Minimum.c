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
    int c,min=x[0],max=x[0],k=0;
    for(int i=0;i<n;i++)
    {
        c=0;
        for(int j=0;j<n;j++)
        {
            if(x[i]==x[j])
            c++;
        }
        if(c==x[i])
        {
            if(min>x[i])
            min=x[i];
            if(max<x[i])
            max=x[i];
            k++;
        }
    }
    if(k!=0)
    printf("%d %d",min,max);
    else
    printf("-1");
}