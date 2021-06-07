#include<cstdio>
int main()
{
	int t1,t2;
	scanf("%d%d",&t1,&t2);
	t1=(t2-t1+50)/100;
	int h=t1/3600,m=t1%3600/60,s=t1%60;
	printf("%02d:%02d:%02d\n",h,m,s );
	return 0;
}