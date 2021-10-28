#include<stdio.h>
int main()
{
	int n,n1=0,n2=1,n3,sum;
	printf("enter the range");
	scanf("%d",&sum);
	printf("%d\t%d\t",n1,n2);
	while(n1<sum)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		printf("%d\t",n3);
	}
}
