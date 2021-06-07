#include<cstdio>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
int n,fc,mc=101,t4;
string f1,f2,m1,m2,t1,t2,t3;
bool bf,bm;

int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		cin>>t1>>t2>>t3>>t4;
		if(t2=="M")
		{
			if(t4<mc)
				mc=t4,m1=t1,m2=t3,bm=true;
		}
		else
		{
			if(t4>fc)
				fc=t4,f1=t1,f2=t3,bf=true;
		}
	}
	if(bf)
		cout<<f1<<" "<<f2<<endl;
	else cout<<"Absent"<<endl;
	if(bm)
		cout<<m1<<" "<<m2<<endl;
	else cout<<"Absent"<<endl;
	if(bf && bm)
		cout<<fc-mc;
	else cout<<"NA";
	return 0;
}