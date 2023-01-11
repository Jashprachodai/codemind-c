#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int x[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    int sum=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==0||i==(r-1)||j==0||j==(c-1))
            sum=sum+x[i][j];
        }
    }
    printf("%d",sum);
}