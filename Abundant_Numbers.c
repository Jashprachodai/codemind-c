#include<stdio.h>
int main()
{
    int n,sf=0;
    scanf("%d",&n);
    int t=n;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
        sf=sf+i;
    }
    if(sf>t)
    printf("True");
    else
    printf("False");
}