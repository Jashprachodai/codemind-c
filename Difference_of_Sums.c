#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum=0,sqsum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
        sqsum=sqsum+i*i;
    }
    printf("%d",sum*sum-sqsum);
}