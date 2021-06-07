#include<cstdio>
#include<string>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef struct node {
	string name,id;
	int score;
}stu;
bool cmp(stu a,stu b)
{
	return a.score>b.score;
}
int n;
vector<stu> v; 
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		stu ts;
		cin>>ts.name>>ts.id>>ts.score;
		v.push_back(ts);
	}
	int l,r,t1,t2;
	scanf("%d%d",&t1,&t2);
	l=min(t1,t2),r=max(t1,t2);
	sort(v.begin(),v.end(),cmp);
	int count =0;
	for(int i=0;i<v.size();i++)
		if(v[i].score>=l && v[i].score<=r)
		{
			cout<<v[i].name<<" "<<v[i].id<<endl;
			count++;
		}		
	if(count==0)
		cout<<"NONE"<<endl;
	return 0;
}