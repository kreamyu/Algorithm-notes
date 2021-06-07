#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
vector<set<int>> v;
int n,m,k,ti,q1,q2;
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		set<int> ts;
		scanf("%d",&m);
		for(int j=0;j<m;j++)
		{
			scanf("%d",&ti);
			ts.insert(ti);
		}
		v.push_back(ts);
	}
	scanf("%d",&k);
	for(int i=0;i<k;i++)
	{
		scanf("%d%d",&q1,&q2);
		q1--,q2--;
		for()

	}
}