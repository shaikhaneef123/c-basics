#include<stdio.h>
int reverse(int);
int main()
{
	int n,res;
	scanf("%d",&n);
	res=reverse(n);
	printf("%d",res);
}
int reverse(int n)
{
	int r,sum=0;
	while(n!=0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	return sum;
}