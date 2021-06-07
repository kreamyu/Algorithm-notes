#include<cstdio>
#define NMAX 110
int main()
{
	int m,n,num[NMAX];
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%d",& num[(i+m)%n]);
	}
	printf("%d",num[0]);
	for(int i=1;i<n;i++)
	{
		printf(" %d",num[i]);
	}
	return 0;
}