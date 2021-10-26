#include<stdio.h>
int main()
{
	int n,r,sum,c;
	scanf("%d",&n);
	sum=n%10;
	while(n!=0)
	{
		r=n%10;
		n=n/10;
    }
    c=sum+r;
    printf("%d",r);
}
