#include<cstdio>
#include<cmath>
#define maxn 100001
int prime[maxn], pnum;
bool p[maxn] = { 0 };
struct factor {
	int x, num;
}fac[10];
int fnum;
void findprime()
{
	p[1] = true;
	for (int i = 2; i < maxn; i++)
	{
		if (!p[i])
		{
			prime[pnum++] = i;
			for (int j = i + i; j < maxn; j += i)
				p[j] = true;
		}
	}
}
void solu(int n)
{
	int sqr = sqrt(n);//优化 int sqr = (int)sqrt(1.0*n);
	for (int i = 0; i < pnum && prime[i] <= sqr; i++)//<=而非小于
	{
		if (n % prime[i] == 0)
		{
			fac[fnum].x = prime[i];
			fac[fnum].num = 0;
			while (n % prime[i] == 0)
				fac[fnum].num++, n /= prime[i];
			fnum++;
		}
		//优化
		if (n == 1) break;
	}
	if (n > 1)
	{
		fac[fnum].x = n;
		fac[fnum].num = 1;
		fnum++;
	}
}
int main()
{
	findprime();
	int n;
	scanf("%d", &n);
	//1要特判否则没有输出
	if (n == 1)
	{
		printf("1=1");
		return 0;
	}
	solu(n);
	printf("%d=", n);
	for (int i = 0; i < fnum; i++)
	{
		printf("%d", fac[i].x);
		if (fac[i].num > 1) printf("^%d", fac[i].num);//我服了
		if (i != fnum - 1) printf("*");
	}
	return 0;
}