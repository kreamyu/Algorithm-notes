#include<cstdio>
#include<string>
#include<iostream>
#include<vector>
using namespace std;
vector<string> v{"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
int main()
{
	string s;
	cin>>s;
	int sum=0;
	for(int i=0;i<s.size();i++)
		sum+=s[i]-'0';
	s=to_string(sum);
	cout<<v[s[0]-'0'];
	for(int i=1;i<s.size();i++)
	{
		cout<<" "<<v[s[i]-'0'];
	}
	return 0;
}