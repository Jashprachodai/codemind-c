#include<stdio.h>
int main()
{
    int l,b,w,c;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    int outarea;
    outarea=(l+(2*w))*(b+(w*2));
    int req=outarea-(l*b);
    printf("%d",req*c);
}