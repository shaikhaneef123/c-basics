#include<stdio.h>
#include<string.h>
int main()
{
    char str[10],str1[10];
    scanf("%[^\n]s",str);
    printf("%s\n",str);
    strcpy(str1,str);
    printf("%s",str1);
}