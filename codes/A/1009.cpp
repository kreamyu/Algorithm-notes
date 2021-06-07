#include<cstdio>
#include <map>
using namespace std;
map<int,double> m1,m2,m3; 
int main()
{
	int k,t1;
	double t2;
	scanf("%d",&k);
	while(k--)
	{
		scanf("%d%lf",&t1,&t2);
		m1[t1]=t2;
	}
	scanf("%d",&k);
	while(k--)
	{
		scanf("%d%lf",&t1,&t2);
		m2[t1]=t2;
	}
	for(map<int,double>::iterator it1=m1.begin();it1!=m1.end();it1++)
	{
		for(map<int,double>::iterator it2=m2.begin();it2!=m2.end();it2++)
		{
			m3[it1->first + it2->first]+=it1->second * it2->second;
		}
	}
	for(map<int,double>::iterator it3=m3.begin();it3!=m3.end();it3++)
	{
		if(it3->second==0)
		{
			int tmp=it3->first;
			it3++;
			m3.erase(tmp);
		}
	}
	printf("%d",m3.size() );
	for(map<int,double>::reverse_iterator it3=m3.rbegin();it3!=m3.rend();it3++)
	{
		printf(" %d %.1lf",it3->first,it3->second);
	}
	return 0;
}