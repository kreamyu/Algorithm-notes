#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
using namespace std;
int n,ti;
vector<map<string,set<string> > > v;
string tid,ts,s1;
int main()
{
	for(int i=0;i<6;i++)
	{
		map<string,set<string> > tm;
		v.push_back(tm);
	}
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		cin >> tid;
		getline(cin,ts);
		v[1][ts].insert(tid);
		getline(cin,ts);
		v[2][ts].insert(tid);
		getline(cin,ts);
		s1="";
		for(int i=0;i<ts.size();i++)
		{
			if(ts[i]==' ')
			{
				if(!s1.empty())
					v[3][tid].insert(s1);
				s1="";
			}
			else s1+=ts[i];
		}
		if(!s1.empty()) v[3][tid].insert(s1);
		getline(cin,ts);
		v[4][ts].insert(tid);
		getline(cin,ts);
		v[5][ts].insert(tid);
	}
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		getline(cin,ts);
		s1=ts.substr(3,ts.size()-3);
		ti=ts[0]-'0';
		cout<<ts<<endl;
		if(v[ti][s1].empty()) cout<<"Not Found"<<endl;
		else 
			for(set<string>::iterator it=v[ti][s1].begin();it!=v[ti][s1].end();it++)
				cout<<*it<<endl;
	}
	return 0;
}