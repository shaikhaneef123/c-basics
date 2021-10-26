#include<stdio.h>
int main()
{
	int n,first,last,sum;
	scanf("%d",&n);
	last=n%10;
	while(n!=0)
	{
		first=n%10;
		n=n/10;
    }
    sum=first+last;
    printf("%d",sum);
}
