#include<cstdio>
#include<algorithm>
using namespace std;
int num[4];
bool cmp(int a,int b)
{
	return a>b;
}
void to_array(int x)
{
	for(int i=3;i>=0;i--)
		num[i]=x%10,x/=10;
}
int to_int()
{
	int ans=0;
	for(int i=0;i<4;i++)
		ans=ans*10+num[i];
	return ans;
}
int main()
{
	int n,tmax,tmin;
	scanf("%d",&n);
	while(true)
	{
		to_array(n);
		sort(num,num+4,cmp);
		tmax=to_int();
		sort(num,num+4);
		tmin=to_int();
		n=tmax-tmin;
		printf("%04d - %04d = %04d\n",tmax,tmin, n);
		if(n==0 || n==6174) break;
	}
	return 0;
}