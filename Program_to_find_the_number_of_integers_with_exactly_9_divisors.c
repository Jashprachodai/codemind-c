#include<stdio.h>
int divs(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==9) return 1;
    else return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    int c=0;
    for(int j=1;j<=n;j++)
    {
        if(divs(j))
        {
            c++;
            printf("%d ",j);
        }
    }    
    printf("
Total=%d",c);
}