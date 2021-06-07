#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
vector<int> v;
map<int,int> mp;
int main()
{
	int n,m,temp;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&temp);
		mp[temp]++;
	}
	for(map<int,int>::iterator it=mp.begin();it!=mp.end();it++)
	{
		it->second--;
		if(mp[m-it->first])
		{
			printf("%d %d",it->first,m-it->first);
			return 0;
		}
	}
	cout<<"No Solution";
	return 0;
}