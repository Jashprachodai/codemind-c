#include<stdio.h>
#include<math.h>
int main()
{
    int h,m;
    scanf("%d:%d",&h,&m);
    if(h==12)
    h=0;
    if(m==0)
    m=0;
    float ha=(60*h)+m;
    ha=ha/2;
    float ma=6*m;
    float ans=(360-abs(ha-ma))>abs(ha-ma)?abs(ha-ma):360-abs(ha-ma);
    printf("%.1f",ans);
}