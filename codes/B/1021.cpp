#include<cstdio>
#include<string>
#include<iostream>
using namespace std;
int num[11];
int n;
int main()
{
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
		num[s[i]-'0']++;
	for(int i=0;i<10;i++)
	{
		if(num[i])
			printf("%d:%d\n",i,num[i]);
	}
	return 0;
}