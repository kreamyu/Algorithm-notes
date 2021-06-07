#include<cstdio>
int main()
{
	int a1,a2,b1,b2,ansa=0,ansb=0,N;
	scanf("%d",&N);
	while(N--)
	{
		scanf("%d%d%d%d",&a1,&a2,&b1,&b2);
		if(a2!=b2)
			if(a2==a1+b1)
				ansb++;
			else if(b2==a1+b1)
				ansa++;
	}
	printf("%d %d\n",ansa,ansb );
	return 0;

}