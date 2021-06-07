#include<cstdio>
int main()
{
	int n;
	scanf("%d",&n);
	int g=n%10,s=n/10%10,b=n/100;
	for(int i=0;i<b;i++)
		printf("B");
	for(int i=0;i<s;i++)
		printf("S");
	for(int i=0;i<g;i++)
		printf("%d",i+1);
	return 0;
}