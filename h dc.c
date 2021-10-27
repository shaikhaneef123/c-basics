#include<stdio.h>
int main()
{
	int r,n,sum=0;
	scanf("%d",&n);
	while(n!=0)
	{
	r=n%10;
	sum=(sum+r*r*r);
	n=n/10;
	}
	if(sum==n)
	{
		printf("armstrong num");
	}
	else
	{
		printf("not armstrong");
	}
}
