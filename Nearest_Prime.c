#include<stdio.h>
int prime(int n)
{
    int x=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        x++;
    }
    if(x==2)
    return 1;
    else
    return 0;
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int fp,bp,n;
        scanf("%d",&n);
        for(int i=n;;i++)
        {
            if(prime(i))
            {
                fp=i;
                break;
            }
        }
    for(int j=n;;j--)
    {
        if(prime(j))
        {
            bp=j;
            break;
        }
    }
    if((fp-n)>=(n-bp))
    printf("%d
",bp);
    else if((fp-n)<(n-bp))
    printf("%d
",fp);
    }
}    