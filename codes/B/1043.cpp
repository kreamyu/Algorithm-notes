#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
	map<char,int> m;
	string s,ans,sp;
	getline(cin,s);
	for(int i=0;i<s.size();i++)
		m[s[i]]++;
	while(true)
	{
		if(m['P']) ans+='P',m['P']--;
		if(m['A']) ans+='A',m['A']--;
		if(m['T']) ans+='T',m['T']--;
		if(m['e']) ans+='e',m['e']--;
		if(m['s']) ans+='s',m['s']--;
		if(m['t']) ans+='t',m['t']--;
		if(ans==sp) break;
		sp=ans;
	}
	cout<<ans;
	return 0;
}