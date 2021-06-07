#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
bool check(string s)
{
	int pp,pt;
	map<char,int> m;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]!='P' && s[i]!='A' && s[i]!='T')
			return false;
		if(s[i]=='P') 
		
			pp=i,m['P']+=1;
		if(s[i]=='T') 
		
			pt=i,m['T']+=1;
	}
	if(m['P']==1 && m['T']==1)
	{
		if(pp==pt-2 && s[pt-1]=='A')
			return true;
		if(pp==pt-3 && s[pt-1]=='A' && s[pt-2]=='A')
		{
			for(int i=0;i<pp;i++)
				if(s[i]!=s[s.size()-i]) return false;
			return true;
		}
	}
	return false; 
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		if(check(s))
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}