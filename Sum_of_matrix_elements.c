#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int x[a][b];
    for(int i=0;i<a;i++)
    {
        for(int  j=0;j<b;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    int sum=0;
    for(int i=0;i<a;i++)
    {
        for(int  j=0;j<b;j++)
        {
            sum=sum+x[i][j];
        }
    }
    printf("%d",sum);
}