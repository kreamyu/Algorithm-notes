#include<cstdio>
#include<string>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef struct node
{
	int id,score;
	string name;
}stu;
vector<stu> v;
bool cmp1(stu a,stu b){ 
	return a.id<b.id; 
}
bool cmp2(stu a,stu b){ 
	if(a.name == b.name) 
		return a.id<b.id; 
	else return a.name < b.name;
}
bool cmp3(stu a,stu b)
{
	if(a.score==b.score)
		return a.id<b.id; 
	else return a.score < b.score;
}
int n,c;

int main()
{
	scanf("%d%d",&n,&c);
	for(int i=0;i<n;i++)
	{
		stu ts;
		cin>>ts.id>>ts.name>>ts.score;
		v.push_back(ts);
	}
	if(c==1) sort(v.begin(),v.end(),cmp1);
	else if(c==2) sort(v.begin(),v.end(),cmp2);
	else sort(v.begin(),v.end(),cmp3);

	for(int i=0;i<n;i++)
	{
		printf("%06d %s %d\n",v[i].id,v[i].name.c_str(),v[i].score );
	}
	return 0;
}