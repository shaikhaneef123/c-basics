#include<stdio.h>
#include<string.h>
void main()
{
	char s[100];
	int i,count=0,flag=0;
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>=97 && s[i]<=122)
		{
			printf("%c",s[i-32]);
			count++;
		}
		else
		{
			printf("%c",s[i+32]);
			flag++;
		}
	}
	printf("%d %d",count,flag);
}