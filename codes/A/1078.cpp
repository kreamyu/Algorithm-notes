#include<cstdio>
#include<iostream>
#include<algorithm>
#define maxn 100001
using namespace std;
int m,n;
int prime[maxn],pnum,h[maxn];
bool p[maxn]={0};
void findprime()
{
	for(int i=2;i<maxn;i++)
	{
		if(!p[i])
		{
			prime[++pnum]=i;
			for(int j=i+i;j<maxn;j+=i)
				p[j]=true;
		}
	}
}
void check()
{
	if(p[m])
	{
		for(int i=m+1;i<maxn;i++)
			if(!p[i])
			{
				m=i;
				break;
			}
	}
}
int position(int x)
{
	int t=x%m;
	if(!h[t])
	{
		h[t]=true;
		return t;
	}
	for(int i=1;i<m;i++)
	{
		t=(x+i*i)%m;
		if(!h[t])
		{
			h[t]=true;
			return t;
		}
	}
	return -1;
}
int main()
{
	findprime();
	p[1]=true;
	scanf("%d%d",&m,&n);
	check();
	for(int i=0;i<n;i++)
	{
		int t;
		scanf("%d",&t);
		t=position(t);
		if(t!=-1) printf("%d",t);
		else printf("-");
		if(i!=n-1)printf(" ");
	}
	return 0;
}