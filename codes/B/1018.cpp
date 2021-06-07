#include<cstdio>
#include <map>
using namespace std;
map<char, int> mcia, mcib;
int cmp(char a, char b)
{
	if (a == 'C')
	{
		if (b == 'C') return 0;
		else if (b == 'J') return 1;
		else return -1;
	}
	if (a == 'J')
	{
		if (b == 'C') return -1;
		else if (b == 'J') return 0;
		else return 1;
	}
	if (a == 'B')
	{
		if (b == 'C') return 1;
		else if (b == 'J') return -1;
		else return 0;
	}
	return 0;
}
int main()
{
	int N, ans_a1 = 0, ans_0 = 0, amax = 0, bmax = 0;
	char tmpa, tmpb;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		getchar();
		scanf("%c %c", &tmpa, &tmpb);
		int res = cmp(tmpa, tmpb);
		if (res == 1)
		{
			ans_a1++;
			mcia[tmpa]++;
			amax = max(amax, mcia[tmpa]);
		}
		else if (res == 0)
		{
			ans_0++;
		}
		else
		{
			mcib[tmpb]++;
			bmax = max(bmax, mcib[tmpb]);
		}
	}
	printf("%d %d %d\n", ans_a1, ans_0, N - ans_a1-ans_0);
	printf("%d %d %d\n", N - ans_a1-ans_0, ans_0, ans_a1);
	if (mcia['B'] == amax) printf("B ");
	else if (mcia['C'] == amax) printf("C ");
	else printf("J ");

	if (mcib['B'] == bmax) printf("B");
	else if (mcib['C'] == bmax) printf("C");
	else printf("J");
	return 0;

}