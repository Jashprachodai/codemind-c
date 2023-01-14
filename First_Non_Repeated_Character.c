#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n;
        scanf("%d",&n);
        char s[n];
        scanf("%s",s);
        int c=0;
        int k=0;
        for(int i=0;s[i]!=NULL;i++)
        {
            c=0;
            for(int j=0;s[j]!=NULL;j++)
            {
                if(s[i]==s[j])
                c++;
            }
            if(c==1)
            {
                printf("%c
",s[i]);
                k++;
                break;
            }
        }
        if(k==0)
        printf("-1
");
    }
}