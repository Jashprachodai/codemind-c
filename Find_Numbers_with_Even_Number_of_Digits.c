#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x[n],d;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
        d=log10(x[i])+1;
        if(d%2==0)
        c++;
    }
    printf("%d",c);
}