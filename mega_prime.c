#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int fc=0;
    for(int i=1;i<=(n);i++)
    {
        if(n%i==0)
        fc++;
    }
    if(fc==2)
    return 1;
    else
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(prime(n))
    {
        while(n!=0)
        {
            if(!prime(n%10))
            {
                printf("Not Mega Prime");
                return 0;
            }
            n=n/10;
        }
        printf("Mega Prime");
    }
    else
    printf("Not Mega Prime");
}