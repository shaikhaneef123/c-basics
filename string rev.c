#include<stdio.h>
#include<string.h>
int main()
{
    char str[10],str1[10];
    int i,len;
    scanf("%[^\n]s",str);
    len=strlen(str);
    for(i=len-1;i>=0;i--)
    {
    printf("%c",str[i]);
    }
}