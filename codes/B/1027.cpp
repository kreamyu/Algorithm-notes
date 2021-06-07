#include<cstdio>
int num[1001];
int main()
{
	num[1]=1;
	int m,n,col;
	char tar;
	scanf("%d %c",&m,&tar);
	for(int i=2;i<100;i++)
	{
		num[i]=num[i-1]+(2*i-1)*2;
		if(m>=num[i-1] && m<num[i])
		{
			n=i-1,m-=num[i-1];
			break;
		}
	}
	col=2*n-1;
	for(int i=n,j=0;i>0;i--,j++)
	{
		for(int k=0;k<j;k++)
		{
			printf(" ");
		}
		for(int k=0;k<2*i-1;k++)
		{
			printf("%c", tar);
		}
		printf("\n");
	}
	for(int i=2,j=n-2;i<=n;i++,j--)
	{
		for(int k=0;k<j;k++)
			printf(" ");
		for(int j=0;j<2*i-1;j++) 
			printf("%c", tar);
		printf("\n");
	}
	printf("%d", m);
	return 0;

}