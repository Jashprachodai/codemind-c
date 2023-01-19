
#include<stdio.h>
int pal(int n)
{
    int x=0;
    int t=n;
    while(n!=0)
    {
        x=x*10+n%10;
        n=n/10;
    }
    if(x==t)
    return 1;
    else
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    int fp,bp;
    for(int i=n+1;;i++)
    {
        if(pal(i))
        {
            fp=i;
            break;
        }
    }
    for(int i=n-1;;i--)
    {
        if(pal(i))
        {
            bp=i;
            break;
        }
    }
    if((fp-n)>(n-bp))
    printf("%d",bp);
    else if((fp-n)<(n-bp))
    printf("%d",fp);
    if((fp-n)==(n-bp))
    printf("%d %d",bp,fp);
}    
