#include<stdio.h>
int main()
{
	int n,r,oddcount=0,evencount=0;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		if(r%2!=0)
		{
			oddcount=oddcount+1;
		}
    else
    {
     evencount=evencount+1;
	}
	n=n/10;
    }
		printf("%d\n",oddcount);
		printf("%d\n",evencount);
}
