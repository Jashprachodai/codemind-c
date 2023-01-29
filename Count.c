#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    int e=0,o=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        if(x[i]%2==0)
        e++;
        else
        o++;
    }
    printf("%d %d",e,o);
}