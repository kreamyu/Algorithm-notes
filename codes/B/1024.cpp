#include<cstdio>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	string s, ans = "";
	int p = 0, flag = 0, loc, change = 0, l = 0, r;
	cin >> s;
	if (s[p++] == '-')
		flag = 1;
	while (s[p] != '.')
		ans += s[p++];
	loc =p++ -1;
	while (s[p] != 'E')
		ans += s[p++];
	r = p - 2;
	change = atoi(s.substr(p + 1).c_str());
	if (change < 0)
	{
		loc += change;
		if (loc > l)
			ans=ans.substr(0, loc)+"."+ans.substr(loc);
		else
		{
			for (int i = 0; i < abs(loc); i++)
				ans = "0" + ans;
			ans = "0." + ans;
		}

	}
	else
	{
		loc += change;
		if (loc>= r)
		{
			for (int i = 0; i < loc - r; i++)
				ans = ans + "0";
		}
		else ans = ans.substr(0, loc) + "." + ans.substr(loc);
	}
	if (flag)
		cout << "-";
	cout << ans;
	return 0;

}
