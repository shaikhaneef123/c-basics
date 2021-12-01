#include<stdio.h>
#include<string.h>
int main()
{
    char str[10],str1[10];
    int i;
    scanf("%[^\n]s",str);
    strrev(str);
    printf("%s",str);
}