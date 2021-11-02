#include<stdio.h>
void main()
{
	int n,fc=0,res=0;
	scanf("%d",&n);
	fc=factorcount(n);
	if(fc==2)
		{
			printf("prime");
			res=reverse(n);
			fc=factorcount(res);
			if(fc==2)
			{
				printf("circular prime");
			}
			else
			{
				printf("not circular prime");
			}
		}
		else
		{
			printf("not prime");
		}
}
int factorcount(int n)
{
	int i,count=0;
	for(i=1;i<=n;i++)
	{
	if(n%i==0)
	{
		count++;
	}
    
}
return count;
}
int reverse(int n)
{
	int i,r,sum=0;
	while(n!=0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	return sum;
}