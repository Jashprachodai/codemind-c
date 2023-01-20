#include<stdio.h>
int rev(int n)
{
    int x=0;
    while(n!=0)
    {
        x=x*10+(n%10);
        n=n/10;
    }
    return x;
}
int main()
{
    int n;
    scanf("%d",&n);
    int sqn=n*n;
    int revn=rev(n);
    int revsq=revn*revn;
    if(sqn==rev(revsq))
    printf("True");
    else
    printf("False");
}