#include<cstdio>
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	while (true)
	{
		string s;
		getline(cin, s);
		if (s.size() == 1 && s[0] == '0') return 0;
		vector<double> sd;
		vector<char> sc;
		for (int i = 0; i < s.size(); i += 2)
		{
			if (s[i] >= '0' && s[i] <= '9')
			{
				int temp = 0;
				while (i < s.size() && s[i] >= '0' && s[i] <= '9')
					temp = temp * 10 + s[i++] - '0';
				i--;
				sd.push_back(temp);
			}
			else if (s[i] == '+' || s[i] == '-') sc.push_back(s[i]);
			else if (s[i] == '*')
			{
				i += 2;
				int temp = 0;
				while (i < s.size() && s[i] >= '0' && s[i] <= '9')
					temp = temp * 10 + s[i++] - '0';
				i--;
				sd.back() *= temp;
			}
			else
			{
				i += 2;
				int temp = 0;
				while (i < s.size() && s[i] >= '0' && s[i] <= '9')
					temp = temp * 10 + s[i++] - '0';
				i--;
				sd.back() = (double)sd.back() / temp;
			}
		}
		double ans = sd[0];
		for (int i = 0; i < sc.size(); i++)
		{
			if (sc[i] == '+') ans += sd[i + 1];
			else ans -= sd[i + 1];
		}
		printf("%.2f\n", ans);
	}
}