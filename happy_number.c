#include<stdio.h>
int sum(int n)
{
	int r,sum=0;
	while(n!=0)
	{
		r=n%10;
		sum=sum+(r*r);
		n=n/10;
	}
	return sum; 
}
int main()
{
	int n;
	scanf("%d",&n);
	while(1)
	{
		if(sum(n))
		 {
		 	n=sum(n);
		 }
	    if(n<9)
		break;
	}
	if(n==1||n==7)
	printf("True");
	else
	printf("False");
}