#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
map<int,int> m1,m2;
vector<int> v,ans;
void solu(int temp)
{
	int x=temp;
	for(int i=0;x!=1;i++)
	{
		if(m1[x]) return;
		if(x&1) m1[x]=(3*x+1)/2;
		else m1[x]=x/2;
		x=m1[x];
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		m2[temp]=1;
		solu(temp);
	}
	for(map<int,int>::iterator it=m1.begin();it!=m1.end();it++)
		m2[it->second]=0;
	for(map<int,int>::iterator it=m2.begin();it!=m2.end();it++)
	{
		if(it->second) ans.push_back(it->first);
	}
	sort(ans.begin(),ans.end());
	for(int i=ans.size()-1;i>0;i--)
		cout<<ans[i]<<" ";
	cout<<ans[0];
	return 0;

}