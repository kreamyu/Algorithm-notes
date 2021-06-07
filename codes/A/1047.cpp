#include<cstdio>
#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int n,k,t1,t2;
string ts;
map<int,vector<string>> m;
int main()
{
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++)
	{
		cin>>ts>>t1;
		for(int j=0;j<t1;j++)
		{
			scanf("%d",&t2);
			m[t2].push_back(ts);
		}
	}
	for(int i=1;i<=k;i++)
	{
		printf("%d %d",i,m[i].size());
		sort(m[i].begin(),m[i].end());
		for(int j=0;j<m[i].size();j++)
			printf("\n%s",m[i][j].c_str());
		if(i!=k)printf("\n");
	}
	return 0;
}