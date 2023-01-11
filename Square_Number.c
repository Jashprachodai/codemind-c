#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int p;
    for(int i=0;i<=n/2;i++)
    {
        for(int j=0;j<=n/2;j++)
        {
           p=(i*i)+(j*j);
           if(p>=n)
           {
             break;
           }
        }
        if(p==n)
        {
            printf("True");
            return 0;
        }
    }
    printf("False");
}