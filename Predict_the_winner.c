#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    int xs=0,ys=0;
    for(int i=0;i<n;i++)
    {
	    if(x[i]%2==0)
	    xs=xs+x[i];
	    else
	    ys=ys+x[i];
    }
    int d;
    d=abs(xs-ys);
    if(d%4==0)
    printf("X");
    else
    printf("Y");
}