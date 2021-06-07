#include<cstdio>
#include<cmath>
#define maxn 100000
int prime[maxn],pnum;
bool p[maxn]={0};
int n,count;	
void findprime()
{
	for(int i=2;i<=n;i++)
	{
		if(!p[i])
		{
			prime[++pnum]=i;
			if(pnum>1 && prime[pnum]-prime[pnum-1]==2) count++;
			for(int j=i+i;j<maxn;j+=i)
				p[j]=true;
		}
	}
}
int main()
{
	scanf("%d",&n);
	findprime();
	printf("%d",count);
	return 0;
}
