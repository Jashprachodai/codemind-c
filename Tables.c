#include<stdio.h>
int main()
{
    int n,l;
    scanf("%d%d",&n,&l);
    for(int i=1;i<=l;i=i+2)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}