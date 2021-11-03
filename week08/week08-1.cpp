#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);

	int r=0,now=1;
	for(int i=1;i<=n;i++)
	{
		now=now*i;
		r=r+now;
	}
	printf("%d",r);
}
