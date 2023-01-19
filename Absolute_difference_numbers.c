#include<stdio.h>
#include<math.h>
int rev(int n)
{
    int x=0;
    while(n!=0)
    {
        x=x*10+n%10;
        n=n/10;
    }
    return x;
}
int main()
{
    int num,t;
    scanf("%d%d",&num,&t);
    int last,front,p;
    p=pow(10,t);
    last=num%p;
    num=rev(num);
    front=num%p;
    front=rev(front);
    printf("%d", abs(last-front));
}