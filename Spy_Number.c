#include<stdio.h>
int main()
{
    int n,sum=0,p=1;
    scanf("%d",&n);
    while(n!=0)
    {
        sum=sum+(n%10);
        p=p*(n%10);
        n=n/10;
    }
    if(sum==p)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}