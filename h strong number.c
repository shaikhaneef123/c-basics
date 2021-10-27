#include<stdio.h>
int main()
{
	int n,r,evencount=0;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		if(r%2==0)
		{
			evencount=evencount+1;
		}
    }
    n=n/10;
    {
    	printf("%d",evencount);
	}
}
