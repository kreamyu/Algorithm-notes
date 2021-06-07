#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int st[1010], n, ans,num;
int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int t1, t2, t3;
		scanf("%d-%d %d", &t1, &t2, &t3);
		st[t1] += t3;
		if (st[t1] > num)
			num = st[t1], ans = t1;
	}
	printf("%d %d", ans, num);
	return 0;
}