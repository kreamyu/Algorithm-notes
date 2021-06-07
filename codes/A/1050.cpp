#include<cstdio>
#include<string>
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

int main()
{
	map<char, int> bans;
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	for (int i = 0; i < s2.size(); i++)
	{
		bans[s2[i]] = 1;
	}
	string ans = "";
	for (int i = 0; i < s1.size(); i++)
	{
		if (bans[s1[i]] == 0)
		{
			ans += s1[i];
		}
	}
	cout << ans;
	return 0;
}