#include<stdio.h>
int main()
{
	int i,n,j,fact=0;
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
    if(n%i==0)
    {
    	printf("it is not prime");
    }
    		else
    		{
    		printf("it is prime");
		}
	} 
