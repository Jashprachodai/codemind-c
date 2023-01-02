#include<stdio.h>
int main()
{
    char s[50];
    fgets(s,50,stdin);
    int c=0;
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]==32)
        c++;
    }
    printf("%d",c+1);
}