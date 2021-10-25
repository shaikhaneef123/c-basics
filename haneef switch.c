#include<stdio.h>
int main()
{
	int as,ar,at,l,b,h,s,choice;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("enter side of square");
			scanf("%d",&s);
			as=s*s;
			printf("%d",as);
			break;
		case 2:
			printf("enter l and b");
			scanf("%d%d",&l,&b);
			ar=l*b;
			printf("%d",ar);
			break;
		case 3:
			printf("enter h and b");
			scanf("%d%d",&h,&b);
			at=0.5*b*h;
			printf("%d",at);
			break;
	}
}
