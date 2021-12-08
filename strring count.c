#include<stdio.h>
#include<string.h>
void main()
{
	char s[100];
	int count=1,i=0;
	scanf("%[^*]s",s);
	while(s[i]!='\0')
	{
	if(s[i]==' ')
	 {
	    count++;		
	 }
	 if(s[i]=='\n')
	 {
	    count++;		
	 }
	 if(s[i]=='\t')
	 {
	    count++;
	}
	 i++;
     }
     printf("%d",count);
}
