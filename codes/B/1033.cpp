#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
#include<map>
using namespace std;
map<char,int> m;
int main()
{
	string s1,s2,ans="";
	getline(cin,s1);
	getline(cin,s2);
	for(int i=0;i<s1.size();i++)
	{
		m[s1[i]]=1;
		if(s1[i]>='a' && s1[i]<='z')
			m[s1[i]-32]=1;
		else if(s1[i]>='A' && s1[i]<='Z')
			m[s1[i]+32]=1;
	}
	for(int i=0;i<s2.size();i++)
	{
		if((m['+'] && s2[i]>='A' && s2[i]<='Z') || (m[s2[i]]))
			continue;
		ans+=s2[i];
	}
	cout<<ans<<endl;
	return 0;
}