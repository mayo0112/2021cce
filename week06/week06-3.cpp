#include <stdio.h>
int main()
{
	int a,b,c,t;
	scanf("%d%d%d",&a,&b,&c);
	printf("�{�ba:%d b:%d C:%d\n",a,b,c);
	if(a>c)
	{
	t=a;
	a=c;
	c=t;
	}
	printf("�{�ba:%d b:%d C:%d\n",a,b,c);
	if(b>c)
	{
	t=b;
	b=c;
	c=t;
	}
	printf("�{�ba:%d b:%d C:%d\n",a,b,c);
}
