#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
vector<int> v;
char hc[4]={'\0','W','T','L'};
double w,t,l;
int main()
{
	double res=1;
	for(int i=0;i<3;i++)
	{
		double t1,t2,t3,tmax;
		scanf("%lf%lf%lf",&t1,&t2,&t3);	
		tmax=max(max(t1,t2),t3);
		if(tmax==t1)
			v.push_back(1);
		else if(tmax==t2)
			v.push_back(2);
		else v.push_back(3);
		res*=tmax;
	}
	for(int i=0;i<v.size();i++)
	{
		cout<<hc[v[i]]<<" ";
	}

	double ans=(res*0.65-1)*2;	
	printf("%.2lf",ans);
	return 0;
}