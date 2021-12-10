#include<stdio.h>
#include<string.h>
void main()
{
	char s[100],ch,rch;
	int i,len;
	scanf("%[^\n]s",&s);
	fflush(stdin);
	printf("enter char");
	scanf("%c ",&ch);
	fflush(stdin);
	printf("enter rch");
	scanf("%c ",&rch);
	fflush(stdin);
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		if(ch==s[i])
		{
			s[i]=rch;
		}
	}
	puts(s);
}