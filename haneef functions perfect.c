#include<stdio.h>
int perfect(int);
int main()
{
	int n,sum;
	scanf("%d",&n);
	sum=perfect(n);
	if(sum==n)
		{
			printf("perfect");
		}
		else
		{
			printf("not perfect");
		}
}
int perfect(int n)
{
	int i,sum=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
		sum=sum+i;
	}
}
			return sum;
}