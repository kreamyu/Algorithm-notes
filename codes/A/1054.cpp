#include<cstdio>
#include<iostream>
#include<map>
#include<string>

using namespace std;
int main()
{
	int n,k,an=0;
	map<string,int> m;
	string ts,as;
	scanf("%d%d",&n,&k);
	for(int i=0;i<k*n;i++)
	{
		cin>>ts;
		m[ts]++;
		if(m[ts]>an)
		{
			an=m[ts];
			as=ts;
		}
	}
	cout<<as;
	return 0;
}