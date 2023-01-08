#include<stdio.h>
int main()
{
    int l,t;
    scanf("%d%d",&l,&t);
    for(int i=1;i<=t;i++)
    {
        int w,h;
        scanf("%d%d",&w,&h);
        if(w<l || h<l)
        printf("UPLOAD ANOTHER
");
        else if(w>=l && h>=l)
        {
            if(w==h)
            printf("ACCEPTED
");
            else
            printf("CROP IT
");
        }
    }
}
