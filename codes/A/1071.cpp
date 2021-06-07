#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
#include<map>
using namespace std;
map<string, int> m;
string s,  as = "";
int anum;
int main()
{
	getline(cin, s);
	string s1 = "";
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
			s1 += s[i];
		else
		{
			if (!s1.empty())
			{
				m[s1]++;
				if (m[s1] > anum || (m[s1] == anum && s1 < as))
				{
					anum = m[s1];
					as = s1;
				}
				s1 = "";
			}
		}
	}
	if (!s1.empty())
	{
		m[s1]++;
		if (m[s1] > anum || (m[s1] == anum && s1 < as))
		{
			anum = m[s1];
			as = s1;
		}
	}
	cout << as << " " << anum;

	return 0;
}