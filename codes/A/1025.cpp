#include<cstdio>
#include<string>
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
typedef struct node {
	string rn;
	int fr, lr, sc, ln;
}node;
bool cmp(node a, node b)
{
	if (a.sc != b.sc) return a.sc > b.sc;
	else return a.rn < b.rn;
}
vector<node> vall;
int main()
{
	int n, k;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &k);
		vector<node> vtmp;
		for (int j = 0; j < k; j++)
		{
			node tn;
			cin >> tn.rn >> tn.sc;
			tn.ln = i + 1;
			vtmp.push_back(tn);
		}
		sort(vtmp.begin(), vtmp.end(), cmp);
		for (int j = 0; j < vtmp.size(); j++)
		{
			if (j == 0) vtmp[j].lr = j + 1;
			else
			{
				if (vtmp[j].sc == vtmp[j - 1].sc)
					vtmp[j].lr = vtmp[j - 1].lr;
				else vtmp[j].lr = j + 1;
			}
			vall.push_back(vtmp[j]);
		}
	}
	sort(vall.begin(), vall.end(), cmp);
	cout << vall.size() << endl;
	if (vall.size() > 0)
	{
		vall[0].fr = 1;
		cout << vall[0].rn << " " << vall[0].fr << " " << vall[0].ln << " " << vall[0].lr;
	}
	for (int j = 1; j < vall.size(); j++)
	{
		if (vall[j].sc == vall[j - 1].sc)
			vall[j].fr = vall[j - 1].fr;
		else vall[j].fr = j + 1;
		cout << endl << vall[j].rn << " " << vall[j].fr << " " << vall[j].ln << " " << vall[j].lr;
	}
	return 0;
}