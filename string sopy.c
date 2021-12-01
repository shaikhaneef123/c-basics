#include<stdio.h>
#include<string.h>
int main()
{
    char str[10],str1[10];
    int i;
    scanf("%[^\n]s",str);
    printf("%s\n",str);
    for(i=0;str[i]!='\0';i++)
    {
    str1[i]=str[i];
    }
    printf("%s",str1);
}