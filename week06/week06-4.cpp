#include <stdio.h>
int main()
{
	int a,b,c,t;
	scanf("%d%d%d",&a,&b,&c);
	if(a>c)
	{
	t=a;
	a=c;
	c=t;
	}
	if(b>c)
	{
	t=b;
	b=c;
	c=t;
	}
	if(a+b<=c)printf("���~");
	else if(a*a+b*b==c*c) printf("����");
	else if(a*a+b*b>c*c) printf("�U��");
	else if(a*a+b*b<c*c) printf("�w��");
}
