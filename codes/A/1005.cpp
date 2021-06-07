#include<cstdio>
#include<string>
#include<iostream>
#include<vector>
using namespace std;
vector<string> v{"zero","one","two","three","four","five","six","seven","eight","nine"};
int main()
{
	int n,sum=0;
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		sum+=s[i]-'0';
	}
	s=to_string(sum);
	cout<<v[s[0]-'0'];
	for(int i=1;i<s.size();i++)
	{
		cout<<" "<<v[s[i]-'0'];
	}
	return 0;
}