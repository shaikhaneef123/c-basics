#include<stdio.h>
#include<string.h>
void main()
{
	char s[100];//madam
	int len,i;
	gets(s);
	len=strlen(s);//5
	for(i=0;i<(len/2);i++)//0<2
	{
		if(s[i]!=s[len-1-i])//malayalamha
		{
			break;
		}
	}
	if(i==len/2)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
		
	}
}
