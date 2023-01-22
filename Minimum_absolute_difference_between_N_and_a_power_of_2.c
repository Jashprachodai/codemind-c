#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
        int p=0,fp=0;
        while(fp<=n)
        {
            fp=pow(2,p);
            p++;
        }
        int bp;
        bp=fp/2;
        if((fp-n)>(n-bp))
        printf("%d",(n-bp));
        else if((fp-n)<(n-bp))
        printf("%d",(fp-n));
    
}