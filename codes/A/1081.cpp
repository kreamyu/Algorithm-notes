/*
rational
*/
#include<cstdio>
#include<cmath>
using namespace std;

typedef struct Fraction{
	long long u,d;
}fs;
int gcd(int a,int b)
{ 
	if(!b) return a;
	else return gcd(b,a%b);
 }
fs fsrd(fs f)
{
	if(f.d<0) f.d=-f.d,f.u=-f.u;
	if(f.u==0) f.d=1;
	else
	{
		int d=gcd(abs(f.u),f.d);
		f.u/=d;
		f.d/=d;
	} 
	return f;
}
fs fsadd(fs fa,fs fb)
{
	fs f;
	f.u=fa.u*fb.d+fb.u*fa.d;
	f.d=fa.d*fb.d;
	return fsrd(f);
}
int main()
{
	int n;
	scanf("%d",&n);
	fs ans={0,1};
	for(int i=0;i<n;i++)
	{
		fs tfs;
		scanf("%lld/%lld",&tfs.u,&tfs.d);
		ans=fsadd(tfs,ans);
	}
	ans=fsrd(ans);
	if(ans.d==1) printf("%lld",ans.u);
	else if(abs(ans.u)>ans.d)
		printf("%lld %lld/%lld",ans.u/ans.d,abs(ans.u)%ans.d,ans.d );
	else printf("%lld/%lld",ans.u,ans.d);
	return 0;
}