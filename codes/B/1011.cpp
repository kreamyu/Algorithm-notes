#include <cstdio>
#include <algorithm>
using namespace std;
bool cmp(int a,int b,int c)
{
	long long imax=max(a,b),imin=min(a,b);
	return (c-imax) < imin;
}
int main()
{
	int T,a,b,c;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
		scanf("%d%d%d",&a,&b,&c);
		if(cmp(a,b,c)) printf("Case #%d: true\n",i);
		else printf("Case #%d: false\n",i);
	}
	return 0;
}