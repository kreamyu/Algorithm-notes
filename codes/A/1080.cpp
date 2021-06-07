#include<cstdio>
#include<string>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef struct node
{
	int id, rank, ge, gi, zy[6] = { 0 };
}stu;
bool cmp(stu a, stu b)
{
	if (a.ge + a.gi != b.ge + b.gi) return a.ge + a.gi > b.ge + b.gi;
	else return a.ge > b.ge;
}
bool cmp2(stu a, stu b)
{
	return a.id < b.id;
}
bool isequal(stu a, stu b)
{
	return a.ge + a.gi == b.ge + b.gi && a.ge == b.ge;
}
vector<stu> v;
int n, m, k;
int full[110] = { 0 };
vector<vector<stu> > ans;
int main()
{
	scanf("%d%d%d", &n, &m, &k);
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &full[i]);
		vector<stu> tv;
		ans.push_back(tv);
	}
	for (int i = 0; i < n; i++)
	{
		stu ts;
		ts.id = i;
		scanf("%d%d", &ts.ge, &ts.gi);
		for (int j = 0; j < k; j++)
			scanf("%d", &ts.zy[j]);
		v.push_back(ts);
	}
	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 0; j < k; j++)
		{
			int tzy = v[i].zy[j];
			if (ans[tzy].size() < full[tzy] || ((ans[tzy].size() >= full[tzy])&& isequal(v[i], ans[tzy][ans[tzy].size() - 1])))
			{
				ans[tzy].push_back(v[i]);
				break;
			}
		}
	}
	for (int i = 0; i < ans.size(); i++)
	{
		sort(ans[i].begin(), ans[i].end(), cmp2);
		if (!ans[i].empty())
			printf("%d", ans[i][0].id);
		for (int j = 1; j < ans[i].size(); j++)
			printf(" %d", ans[i][j].id);
		printf("\n");
	}
	return 0;
}