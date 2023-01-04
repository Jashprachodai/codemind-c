#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,t;
    scanf("%d",&n);
    t=n;
    int d=log10(n)+1;
    while(n!=0)
    {
        sum=sum+pow((n%10),d);
        d--;
        n=n/10;
    }
    if(sum==t)
    printf("True");
    else
    printf("False");
}