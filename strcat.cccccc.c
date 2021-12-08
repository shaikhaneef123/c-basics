#include<stdio.h>
#include<string.h>
void main()
{
	char s[100],s1[100],s2[100];
	int i,j;
	gets(s);
	gets(s1);
	for(i=0;s[i]!='\0';i++)
		{
			s2[i]=s[i];
		}
		s2[i]='\0';
	for(j=0;s1[j]!='\0';j++,i++)
	{
		s2[i]=s1[j];
	}
	s2[i]='\0';
	puts(s2);
}
