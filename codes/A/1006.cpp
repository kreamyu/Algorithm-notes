#include<cstdio>
#include<string>
#include<iostream>
using namespace std;
#define MAX 0x3fffffff
int main()
{
	int n,ibegin=MAX,iend=0,t1,t2,t3;
	string ts,sbegin,send;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		cin>>ts;
		scanf("%d:%d:%d",&t1,&t2,&t3);
		t1=t1*3600+t2*60+t3;
		if(t1<ibegin) ibegin=t1,sbegin=ts;
		scanf("%d:%d:%d",&t1,&t2,&t3);
		t1=t1*3600+t2*60+t3;
		if(t1>iend) iend=t1,send=ts;
	}
	cout<<sbegin<<" "<<send;
	return 0;
}