#include<cstdio>
#include<cmath>
int main()
{
	int n, ans_len = 0, ans_l = 0;
	scanf("%d", &n);
	int sqr = sqrt(n);
	for (int i = sqr+1; i > 1; i--)
	{
		int now = n, count = 0, l = i;
		while (l!=1 && now % l == 0)
		{
			now /= l;
			count++;
			l--;
		}
		if (count >= ans_len)
		{
			ans_len = count;
			ans_l = l + 1;
		}
	}
	if (ans_len == 0)
	{
		ans_l = n;
		ans_len = 1;
	}
	printf("%d\n", ans_len);
	for (int i = 0; i < ans_len; i++)
	{
		printf("%d", ans_l + i);
		if (i != ans_len - 1)printf("*");
	}
	return 0;
}