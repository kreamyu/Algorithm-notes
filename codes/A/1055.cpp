#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef struct node{
	string name;
	int w,age;
}peo;
bool cmp(peo a,peo b)
{
	if(a.w!=b.w) return a.w>b.w;
	else if(a.age!=b.age) return a.age<b.age;
	else return a.name<b.name;
}
int n,m;
vector<peo> v; 
int main()
{
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	{
		peo tp;
		cin>>tp.name>>tp.age>>tp.w;
		v.push_back(tp);
	}
	sort(v.begin(),v.end(),cmp);
	for(int i=1;i<=m;i++)
	{
		int t1,t2,t3,l,r;
		scanf("%d%d%d",&t1,&t2,&t3);
		int count=0;
		l=min(t2,t3),r=max(t2,t3);
		printf("Case #%d:\n", i);
		for(int j=0;j<v.size() && count<t1;j++)
			if(v[j].age >=l && v[j].age <=r )
			{
				cout<<v[j].name<<" "<<v[j].age<<" "<<v[j].w<<endl;
				count++;
			}
		if(count==0)
			printf("None\n");
	}
	return 0;

}