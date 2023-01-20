#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n/2;i++)
    {
        if(i*i==n)
        {
            printf("True");
            return 0;
        }
    }
    printf("False");
}