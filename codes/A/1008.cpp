#include<cstdio>

int main()
{
	int n,now=0,temp,ans=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&temp);
		temp-=now;
		if(temp>0) ans+=6*temp;
		else if(temp<0) ans-=4*temp;
		ans+=5;
		now+=temp;
	}
	printf("%d",ans);
	return 0;
}