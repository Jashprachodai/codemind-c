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
    int c,k=0;
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
            printf("%d ",x[i]);
            k++;
            for(int k=0;k<n;k++)
            {
                if(x[i]==x[k])
                x[k]=-1;
            }
        }
    }
    if(k==0)
    printf("-1");
}