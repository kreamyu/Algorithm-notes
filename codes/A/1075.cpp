#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef struct node {
	int id = 0, score[6] = { -2,-2,-2,-2,-2,-2 }, total = 0,pfnum = 0, show = 0;
}stu;
bool cmp(stu a, stu b)
{
	if (a.total != b.total) return a.total > b.total;
	else if (a.pfnum != b.pfnum) return a.pfnum > b.pfnum;
	else return a.id < b.id;
}
vector<stu> v;
int fm[6] = { 0 };
int ns, np, nq;
int main()
{
	scanf("%d%d%d", &ns, &np, &nq);
	for (int i = 1; i <= np; i++)
		scanf("%d", &fm[i]);
	for (int i = 1; i <= ns; i++)
	{
		stu ts;
		ts.id = i;
		v.push_back(ts);
	}
	
	for (int i = 0; i < nq; i++)
	{
		int tid, tp, tscore;
		scanf("%d%d%d", &tid, &tp, &tscore);
		v[tid - 1].score[tp] = max(tscore, v[tid - 1].score[tp]);
		if (tscore >= 0) v[tid - 1].show = 1;
	}
	for (int i = 0; i < ns; i++)
	{
		for (int j = 1; j <= np; j++)
		{
			if(v[i].score[j]>=0)
				v[i].total += v[i].score[j];
			if (v[i].score[j] == fm[j])
				v[i].pfnum++;
		}
	}
	sort(v.begin(), v.end(), cmp);
	int count = 1;
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i].show == 0) break;
		if (i != 0 && v[i].total != v[i - 1].total)
		{
			count=i+1;
		}
		printf("%d %05d %d", count, v[i].id, v[i].total);
		for (int j = 1; j <= np; j++)
		{
			if (v[i].score[j] == -2)
				printf(" -");
			else 
				printf(" %d", v[i].score[j]>=0? v[i].score[j]:0);
		}
		printf("\n");
	}
	return 0;
}