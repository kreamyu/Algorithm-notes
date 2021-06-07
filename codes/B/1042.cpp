#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
map<char,int> m;
vector<char> ans;
int main()
{
	string s;
	getline(cin,s);
	int count=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]>='A' && s[i]<='Z') s[i]+=32;
		else if(s[i]<'a' || s[i]>'z') continue;
		m[s[i]]++;
		if(m[s[i]]>count) 
			count=m[s[i]];
	}
	for(map<char,int>::iterator it=m.begin();it!=m.end();it++)
		if(it->second==count)
			ans.push_back(it->first);
	sort(ans.begin(),ans.end());
	printf("%c %d",ans[0],m[ans[0]]);
	return 0;
}