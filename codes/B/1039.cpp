#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	map<char,int> m;
	for(int i=0;i<s1.size();i++)
		m[s1[i]]++;
	int ans1=0,ans2=0;
	for(int i=0;i<s2.size();i++)
		m[s2[i]]--;
	for(map<char,int>::iterator it=m.begin();it!=m.end();it++)
	{
		if(it->second<0) ans1+=it->second;
		else ans2+=it->second;
	}

	if(ans1!=0) printf("No %d",-ans1);
	else printf("Yes %d",ans2);
	return 0;
}