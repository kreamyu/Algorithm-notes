#include<cstdio>
long long  to(int a,int b,int c)
{
	return (long long)a*17*29+b*29+c;
}
int main()
{
	int a1,a2,a3,b1,b2,b3;
	scanf("%d.%d.%d %d.%d.%d",&a1,&a2,&a3,&b1,&b2,&b3);
	long long  ans=to(b1,b2,b3)+to(a1,a2,a3);
	printf("%d.%d.%d",ans/29/17,ans/29%17,ans%29);
	return 0;
}