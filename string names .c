#include<stdio.h>
void main()
{
	char s[10][10],temp[10];
	int i,j,n;
	printf("how many names dou want");
	scanf("%d",&n);
	fflush(stdin);
	for(i=0;i<n;i++)
	{
		gets(s[i]);
		fflush(stdin);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(strcmp(s[j],s[j+1])>0)
			{
				strcpy(temp,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],temp);
			}
		}
	}
	for(i=0;i<=n;i++) 
	{
		puts(s[i]);
	}	
}