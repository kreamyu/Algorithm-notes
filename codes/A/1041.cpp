#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
map<int,int> m;
vector<int> v;
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int temp;
		scanf("%d",&temp);
		m[temp]++;
		v.push_back(temp);
	}
	for(int i=0;i<v.size();i++)
	{
		if(m[v[i]]==1)
		{
			printf("%d",v[i]);
			return 0;
		}
	}
	printf("None");
	return 0;
}