#include<stdio.h>
int main()
{
    int n,fs=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        fs=fs+i;
    }
    if(fs==n)
    printf("True");
    else
    printf("False");
}