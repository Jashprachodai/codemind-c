#include<stdio.h>
#include<math.h>
int main()
{
    long int n,p;
    scanf("%ld",&n);
    int nd=log10(n)+1;
    p=pow(10,nd);
    if(nd==10)
    {
        if(n%p!=0)
        {
            printf("Valid");
            return 0;
        }
        else
        printf("Invalid");
    }
    printf("Invalid");
}