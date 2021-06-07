#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

#define NMAX 1000000
int N, M, s[NMAX], c[NMAX], total, t1, t2,tmp;
vector<int> vans;
int main()
{
	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
	{
		scanf("%d", &s[i]);
		c[i] = c[i - 1] + s[i];
		total += s[i];
	}
	scanf("%d", &M);

	for (int i = 0; i < M; i++)
	{
		scanf("%d%d", &t1, &t2);
		if (t1 > t2)
			swap(t1, t2);
		tmp = c[t2-1] - c[t1-1];
		vans.push_back(min(tmp, total - tmp));
	}
	if(!vans.empty()) printf("%d", vans[0]);

	for (int i = 1; i < vans.size(); i++)
	{
		printf("\n%d",vans[i]);
	}

	return 0;
}