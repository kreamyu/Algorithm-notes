#include <cstdio>
int main()
{
	int a,i;
	scanf("%d",&a);
	for(i=0;a!=1;i++)
	{
		if(a%2) a=(3*a+1) >> 1;
		else a=a >> 1;
	}
	printf("%d",i);
	return 0;
}