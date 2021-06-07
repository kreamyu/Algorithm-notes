#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<set>
using namespace std;
int n,k,t1,t2;
string ts;
map<string,set<int>> m; 
int main()
{
	scanf("%d%d",&n,&k);
	for(int i=0;i<k;i++)
	{
		scanf("%d%d",&t1,&t2);
		for(int j=0;j<t2;j++)
		{
			cin>>ts;
			m[ts].insert(t1);
		}
	}
	for(int i=0;i<n;i++)
	{
		cin>>ts;
		cout<<ts<<" "<<m[ts].size();
		for(set<int>::iterator it=m[ts].begin();it!=m[ts].end();it++)
			printf(" %d",*it);
		if(i!=n-1)printf("\n");
	}
	return 0;
}