#include<stdio.h>
int main()
{
	int a,b,t=2,r=1;
	scanf("%d%d",&a,&b);
	while(a!=1)
	{
	if(a%t==0 && b%2==0)
	{
		a=a/2;
		b=b/2;
		r=r*t;
	}
	else
	{
	t++;
	}
	if(t>a || t>b)
	{
		r=r*a*b;
		break;
	}
}
	printf("lcm of two num is %d",r);
}
