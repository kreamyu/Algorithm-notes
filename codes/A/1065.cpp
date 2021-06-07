#include<cstdio>
#include <algorithm>
#include <vector>
#define LL long long
using namespace std;

vector<bool> vans;
bool cmp(LL a,LL b,LL c)
{
	return min(a,b)>c-max(a,b);
}
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		LL la,lb,lc;
		scanf("%lld%lld%lld",&la,&lb,&lc);
		vans.push_back(cmp(la,lb,lc));
	}
	if(!vans.empty())
		if(vans[0]) printf("Case #1: true");
		else printf("Case #1: false");
	for(int i=1;i<vans.size();i++)
	{
		if(vans[i]) printf("\nCase #%d: true",i+1);
		else printf("\nCase #%d: false",i+1);
	}
	return 0;
}
/*
测试样例
3
1 2 3
2 3 4
9223372036854775808 0 9223372036854775807
*/
#include <cstdio>
int main()
{
	long long a,b,c;
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
		scanf("%lld%lld%lld",&a,&b,&c);
		long long sum=a+b;
		if(a>0 && b>0 && sum<0)
			printf("Case #%d: true",i);
		else if(a<0 && b<0 && sum>=0)
			printf("Case #%d: false",i);
		else if(sum>c) printf("Case #%d: true",i);
		else printf("Case #%d: false",i);
		
		if(i!=T) printf("\n");
	}
	return 0;
}