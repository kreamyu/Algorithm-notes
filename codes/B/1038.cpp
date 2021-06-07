#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
	map<int,int> m;
	int n,k,temp;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&temp);
		m[temp]++;
	}
	scanf("%d",&k);
	for(int i=0;i<k-1;i++)
	{
		scanf("%d",&temp);
		printf("%d ",m[temp]);
	}
	scanf("%d",&temp);
	printf("%d",m[temp]);
	return 0;

}