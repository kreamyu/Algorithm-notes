#include<cstdio>
#include<string>
#include<iostream>
#include<vector>
using namespace std;
vector<string> v;
int main()
{
	char c;
	string s;
	while(scanf("%c",&c)!=EOF && c!='\n')
	{
		if(c==' ')
		{
			v.push_back(s);
			s="";
		}
		else
			s+=c;
	}
	v.push_back(s);
	if(!v.empty())
		cout<<v[v.size()-1];
	for(int i=v.size()-2;i>=0;i--)
		cout<<" "<<v[i];
	return 0;
}