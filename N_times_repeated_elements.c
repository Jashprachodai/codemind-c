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
    int c,m,k=0;
    scanf("%d",&m);
    for(int i=0;i<n;i++)
    {
        c=0;
        for(int j=0;j<n;j++)
        {
            if(x[i]==x[j] && x[i]!=-1)
            c++;
        }
        if(c==m)
        {
            k++;
            printf("%d ",x[i]);
            for(int k=0;k<n;k++)
            {
                if(x[i]==x[k])
                x[k]=-1;
            }
        }
    }
    if(k==0)
    printf("%d",-1);
}