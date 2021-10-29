#include<stdio.h>
int big(int,int,int);
int main()
{
  int n1,n2,n3,c;
  scanf("%d%d%d",&n1,&n2,&n3);
  c=big(n1,n2,n3);
  printf("biggest is %d",c);
}
int big(int n1,int n2,int n3)
{
	int big;
	if(n1>n2 && n1>n3)
	{
		return n1;
	}
	else if(n2>n1 && n2>n3)
	{
		return n2;
	}
	else
	{
		return n3;
	}
}
