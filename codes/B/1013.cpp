#include<cstdio>
#include<cmath>
#define maxn 100000
int prime[maxn],pnum;
bool p[maxn]={0};
int n,m;	
void findprime()
{
	for(int i=2;i<maxn;i++)
	{
		if(i>=n) break;//控制数目
		if(!p[i])
		{
			prime[++pnum]=i;
			for(int j=i+i;j<maxn;j+=i)
				p[j]=true;
		}
	}
}
int main()
{
	scanf("%d%d",&m,&n);
	findprime();
	for(int i=m,j=1;i<=n && i>0;i++,j++)
	{
		printf("%d",prime[i]);
		if(j%10==0) printf("\n");
		else if(i!=n) printf(" ");
	}
	return 0;
}
