#include <cstdio>
using namespace std;
int main()
{
	int a,da,b,db,ta=0,tb=0;
	scanf("%d%d%d%d",&a,&da,&b,&db);
	while(a)
	{
		if(a%10==da) ta=ta*10+da;
		a/=10;
	}
	while(b)
	{
		if(b%10==db) tb=tb*10+db;
		b/=10;
	}
	printf("%d", ta+tb);
	return 0;
}