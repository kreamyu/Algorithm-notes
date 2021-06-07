#include<cstdio>
#include<vector>
using namespace std;
vector<int> v;
bool check()
{
	for(int l=0,r=v.size()-1;l<r;l++,r--)
	{
		if(v[l]!=v[r])
			return false;
	}
	return true;
}
int main()
{
	int n,d;
	scanf("%d%d",&n,&d);
	while(n)
	{
		v.push_back(n%d);
		n/=d;
	}
	if(v.empty())
		v.push_back(0);
	if(check())
		printf("Yes\n");
	else 
		printf("No\n");
	printf("%d",v[v.size()-1]);
	for(int i=v.size()-2;i>=0;i--)
	{
		printf(" %d",v[i]);
	}
	
	return 0;

}