#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
#include<map>
using namespace std;
char change(char c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return c;
}
map<char, int> m;
int main()
{
	string s1, s2, ans="";
	cin >> s1 >> s2;
	for (int i = 0, j = 0; i < s1.size(); i++)
	{
		if (s1[i] == s2[j]) j++;
		else
		{
			char now = change(s1[i]);
			if (m[now] != 1)
			{
				ans += now;
				m[now] = 1;
			}
		}
	}
	cout << ans;
	return 0;
}