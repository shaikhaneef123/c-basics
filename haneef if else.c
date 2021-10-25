#include<stdio.h>
int main()
{
	int a,b,c,t,p;
	scanf("%d%d%d",&a,&b,&c);
	t=a+b+c;
	p=((t*100)/300);
	if(p>=90)
	printf("a grade");
	else if(p<=80 && p>70)
	printf("b grade");
	else if(p<=70 && p>60)
	printf("c grade");
	else if(p<=60 && p>40)
	printf("d grade");
	else
	printf("fail");
}
