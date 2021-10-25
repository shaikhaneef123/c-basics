#include<stdio.h>
int main()
{
	int i,n,j,fact=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
    if(n%i==0)
    fact=fact+1;
    }
    if(fact==2)
    {
    	printf("its is prime");
    }
    		else
    		{
    		printf("it is not prime");
		}
	} 
