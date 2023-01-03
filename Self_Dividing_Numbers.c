#include<stdio.h>
int self(int n)
{
   int r,t,c=0,dc=0;
   t=n;
   if(n%10!=0)	
   {
   	 while(n!=0)
   	 {
   	   r=n%10;
   	   c++;
	   if(t%r==0)
	   dc++;
	   n=n/10;			
	 }
	 if(c==dc)
	 return 1;
   }
   return 0;
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++)
	{
		if(self(i))
		printf("%d ",i);
	}
}