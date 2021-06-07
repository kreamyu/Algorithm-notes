#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
using namespace std;
typedef struct node {
	string id;
	int sc[4];
	int rank[4];
};
vector<node> v;
map<string, pair<int, int>> mp;
char cans[4] = { 'A','C','M','E' };
int flag;
bool cmp(node a, node b)
{
	if (a.sc[flag] != b.sc[flag]) return a.sc[flag] > b.sc[flag];
	else return a.id < b.id;
}
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		node tn;
		cin >> tn.id;
		for (int j = 1; j < 4; j++)
			scanf("%d",&tn.sc[j]);
		tn.sc[0] = (tn.sc[3] + tn.sc[1] + tn.sc[2]) / 3;
		v.push_back(tn);
	}
	for (int i = 0; i < 4; i++)
	{
		flag = i;
		sort(v.begin(), v.end(), cmp);
		for (int j = 0; j < n; j++)
		{
			if (j == 0) v[j].rank[i] = 1;
			else
			{
				if (v[j].sc[i] == v[j - 1].sc[i])
					v[j].rank[i] = v[j - 1].rank[i];
				else v[j].rank[i] = j + 1;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		int res_rank = n + 1, res_km=3;
		for (int j = 3; j >= 0; j--)
		{
			if (v[i].rank[j] <= res_rank)
			{
				res_rank = v[i].rank[j], res_km = j;
			}
		}
		pair<int, int> pt{ res_rank, res_km };
		mp[(v[i].id)] =pt;
	}
	for (int i = 0; i < m; i++)
	{
		string s;
		cin >> s;
		if (mp[s].first==0)
			cout << "N/A" << endl;
		else 
			printf("%d %c\n", mp[s].first, cans[mp[s].second]);
	}
	return 0;
}