#include<stdio.h>
#include<math.h>
int num(int n,int d)
{
    int k=1,s=0,r;
    while(n!=0)
    {
        r=n%10;
        if(k==d)
        {
            if(r==9)
            s=(s*10)+6;
            else if(r==6)
            s=(s*10)+9;
        }
        else
        s=(s*10)+r;
        k++;
        n=n/10;
    }
    int t=0;
    while(s!=0)
    {
        t=t*10+(s%10);
        s=s/10;
    }
    return t;
}
int main()
{
    int n;
    scanf("%d",&n);
    int max=n;
    int d=log10(n)+1;
    d++;
    int p;
    while(d!=0)
    {
        p=num(n,d);
        if(max<p)
        max=p;
        d--;
    }
    printf("%d",max);
}