#include<cstdio>
#include<algorithm>
#include<string>
#include<iostream>
using namespace std;
int main()
{
	string h1,h2,l1,l2,t1,t2;
	int h3=-1,l3=101,n,t;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		cin>>t1>>t2;
		scanf("%d",&t);
		if(t>h3)
		{
			h1=t1;
			h2=t2;
			h3=t;
		}
		if(t<l3)
		{
			l1=t1;
			l2=t2;
			l3=t;
		}
	}
	cout<<h1<<" "<<h2<<endl;
	cout<<l1<<" "<<l2;
}