#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int l=1;l<=t;l++)
    {
        int n;
        scanf("%d",&n);
        int x[n];
            for(int i=0;i<n;i++)
            {
                scanf("%d",&x[i]);
            }
        int c=1;
        for(int i=1;i<n;i++)
        {
            if(x[i-1]>x[i])
            c++;
        }
        printf("%d
",c);
    }
}