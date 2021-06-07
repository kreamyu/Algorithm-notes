#include<cstdio>
#include<cmath>
#define maxn 1000001
int prime[maxn],pnum;
bool p[maxn]={0};
int t1,t2,d;
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
int trans(int n,int d)
{
	int res=0;
	while(n)
	{
		res=res*d+n%d;
		n/=d;
	}
	return res;
}
int main()
{
	findprime();
    p[1]=true;
	while(true)
	{
		scanf("%d",&t1);
		if(t1<0) break;
		scanf("%d",&d);
        if(d<0) break;
		t2=trans(t1,d);
		if(p[t1]==false && p[t2]==false)
			printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}