#include<cstdio>
#include<string>
#include<map>
#include<iostream>
using namespace std;
struct node {
	string idnum;
	int examno;
};
map<int, node> m;
int main()
{
	int n, M;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		string s;
		int t1, t2;
		cin >> s;
		scanf("%d%d", &t1, &t2);
		node tn{ s,t2 };
		m[t1] = tn;
	}
	scanf("%d", &M);
	for (int i = 0; i < M; i++)
	{
		int t;
		scanf("%d", &t);
		printf("%s %d\n", m[t].idnum.c_str(), m[t].examno);
	}
	return 0;
}