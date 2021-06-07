#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
#include<iostream>
using namespace std;
typedef struct node
{
	string id;
	int i1,i2;
};
vector<node> v1,v2,v3,v4;
bool cmp(node a,node b)
{
	if( a.i1+a.i2!=b.i1+b.i2)
		return a.i1+a.i2>b.i1+b.i2;
	else if(a.i1!=b.i1)
		return a.i1>b.i1;
	else return a.id<b.id;
}
int main()
{
	int N,L,H;
	scanf("%d%d%d",&N,&L,&H);
	for (int i = 0; i < N; ++i)
	{
		node tn;
		cin>>tn.id>>tn.i1>>tn.i2;
		if(tn.i1>=H && tn.i2>=H)
			v1.push_back(tn);
		else if(tn.i1>=H && tn.i2>=L)
			v2.push_back(tn);
		else if(tn.i1>=L && tn.i2>=L && tn.i1>=tn.i2)
			v3.push_back(tn);
		else if(tn.i1>=L && tn.i2>=L) v4.push_back(tn);
	}
	sort(v1.begin(),v1.end(),cmp);
	sort(v2.begin(),v2.end(),cmp);
	sort(v3.begin(),v3.end(),cmp);
	sort(v4.begin(),v4.end(),cmp);
	cout<<v1.size()+v2.size()+v3.size()+v4.size()<<endl;
	for(int i=0;i<v1.size();i++)
		cout<<v1[i].id<<" "<<v1[i].i1<<" "<<v1[i].i2<<endl;
	for(int i=0;i<v2.size();i++)
		cout<<v2[i].id<<" "<<v2[i].i1<<" "<<v2[i].i2<<endl;
	for(int i=0;i<v3.size();i++)
		cout<<v3[i].id<<" "<<v3[i].i1<<" "<<v3[i].i2<<endl;
	for(int i=0;i<v4.size();i++)
		cout<<v4[i].id<<" "<<v4[i].i1<<" "<<v4[i].i2<<endl;
	return 0;
}