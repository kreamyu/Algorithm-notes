#include<cstdio>
#include<algorithm>
using namespace std;
#define MAX 1010
int main()
{
	bool have[5] = { false };
	int N, a1 = 0, a2 = 0, a3 = 0, a5 = 0, tmp, flag = 1;
	double a4_sum = 0, a4_num = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &tmp);
		if (tmp % 5 == 0) { if (tmp % 2 == 0) a1 += tmp, have[tmp % 5] = true; }
		else if (tmp % 5 == 1) a2 += flag * tmp, flag = -flag, have[tmp % 5] = true;
		else if (tmp % 5 == 2) a3++, have[tmp % 5] = true;
		else if (tmp % 5 == 3) a4_num++, a4_sum += tmp, have[tmp % 5] = true;
		else if (tmp % 5 == 4) a5 = max(a5, tmp), have[tmp % 5] = true;
	}

	if (have[0]) printf("%d ", a1);
	else printf("N ");

	if (have[1]) printf("%d ", a2);
	else printf("N ");

	if (have[2]) printf("%d ", a3);
	else printf("N ");

	double a4 = a4_sum / a4_num;
	if (have[3]) printf("%.1f ", a4);
	else printf("N ");

	if (have[4]) printf("%d", a5);
	else printf("N");
	return 0;
}