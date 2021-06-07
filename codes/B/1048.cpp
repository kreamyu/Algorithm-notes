#include<cstdio>
#include<string>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> v;
vector<char> vs{ 'J','Q','K' };
//  12345
//36878297
int main()
{
	string s1, s2;
	int flag = 1;
	cin >> s1 >> s2;
	int p1 = s1.size() - 1, p2 = s2.size() - 1;
	while (p1>=0 && p2>=0)
	{
		int t1 = s1[p1] - '0', t2 = s2[p2] - '0';
		if (flag == 1)
		{
			v.push_back((t1 + t2) % 13);
		}
		else
		{
			if (t2 - t1 < 0)
				v.push_back(t2 - t1 + 10);
			else
				v.push_back(t2 - t1);
		}
		flag = -flag, --p1, --p2;
	}
	while (p1>=0)
	{
		int t1 = s1[p1] - '0', t2 = 0;
		if (flag == 1)
		{
			v.push_back((t1 + t2) % 13);
		}
		else
		{
			if (t2 - t1 < 0)
				v.push_back(t2 - t1 + 10);
			else
				v.push_back(t2 - t1);
		}
		flag = -flag, --p1;
	}
	while (p2>=0)
	{
		int t1 = 0, t2 = s2[p2] - '0';
		if (flag == 1)
		{
			v.push_back((t1 + t2) % 13);
		}
		else
		{
			if (t2 - t1 < 0)
				v.push_back(t2 - t1 + 10);
			else
				v.push_back(t2 - t1);
		}
		flag = -flag, --p2;
	}
	for (int i = v.size() - 1; i >= 0; i--)
	{
		if (v[i] < 10)
			printf("%d", v[i]);
		else
			printf("%c", (vs[v[i] - 10]));
	}
	return 0;
}