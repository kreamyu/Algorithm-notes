#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
int num[20];
int count1(string s)
{
	int ans=0;
	for(int i=0;i<s.size();i++)
		if(s[i]=='1') ++ans;
	return ans;
}
int main()
{
	string s;
	cin>>s;
	long long temp=1,ans=0;
	for(int i=1;i<=s.size()-1;i++)
	{
		num[i]=temp+9*num[i-1];
		temp*=10;
		ans+=num[i];
	}
	long long t1=pow(10,s.size()-1),t2=atoi(s.c_str());
	for(long long i=t1;i<=t2;i++)
		ans+=count1(to_string(i));
	cout<<ans;
	return 0;

}