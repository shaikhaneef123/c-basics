#include<stdio.h>
int prime(int);
int main()
{
	int n,res;
	scanf("%d",&n);
	res=prime(n);
	printf("%d",i);
}
int prime(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i!=0)
		{
			return i;
		}
	}
}