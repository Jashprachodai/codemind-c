#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,y;
    scanf("%d%d%d",&n,&x,&y);
    int r;
    r=pow(n,x);
    printf("%d",r%y);
}