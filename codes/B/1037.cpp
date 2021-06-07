#include<cstdio>
int to(int a,int b,int c)
{
	return a*17*29+b*29+c;
}
int main()
{
	int a1,a2,a3,b1,b2,b3;
	scanf("%d.%d.%d %d.%d.%d",&a1,&a2,&a3,&b1,&b2,&b3);
	int ans=to(b1,b2,b3)-to(a1,a2,a3);
	if(ans<0)
	{
		printf("-");
		ans=-ans;
	}
	printf("%d.%d.%d",ans/29/17,ans/29%17,ans%29);
	return 0;
}