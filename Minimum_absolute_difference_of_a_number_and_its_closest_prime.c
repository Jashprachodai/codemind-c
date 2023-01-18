#include<stdio.h>
int prime(int n)
{
	int fc=0;
	for(int i=1;i<=n;i++)
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
	int n,fp,bp;
	scanf("%d",&n);
	for(int i=n;;i++)
	{
		if(prime(i))
		{
		fp=i;
		break;
		}
	}
	for(int j=n;;j--)
	{
		if(prime(j))
		{
		bp=j;
		break;
		}
	}
	int np,fd,bd;
	fd=fp-n;
	bd=n-bp;
	if(fd>bd||fd==bd)
	np=bp;
	else if(bd>fd)
	np=fp;
	if((n-np)>0)
	printf("%d",(n-np));
	else
	printf("%d",(np-n));
}