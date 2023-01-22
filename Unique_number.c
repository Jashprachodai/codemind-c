#include<stdio.h>
int fal(int n,int x)
{
    int c=0;
    while(n!=0)
    {
        if((n%10)==x)
        c++;
        n=n/10;
    }
    if(c==1)
    return 1;
    else
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n!=0)
    {
        if(!fal(n,(n%10)))
        {
            printf("Not Unique Number");
            return 0;
        }
        n=n/10;
    }
    printf("Unique Number");
}