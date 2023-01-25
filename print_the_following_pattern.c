#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k,t;
    for(int i=1;i<=n;i++)
    {
        for(int s=n-i;s>0;s--)
        {
            printf(" ");
        }
        t=i-1;
        k=0;
        for(int j=1;j<=2*i-1;j++)
        {
            if(i==j)
            {
                t=0;
                k++;
            }
            if(k==0)
            {
                printf("%d",t);
                t--;
            }
            if(k!=0)
            {
                printf("%d",t);
                t++;
            }
            
        }
        printf("
");
    }
}