#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ld=0;
    while(n!=0)
    {
        if(ld<(n%10))
        ld=n%10;
        n=n/10;
    }
    printf("%d",ld);
}