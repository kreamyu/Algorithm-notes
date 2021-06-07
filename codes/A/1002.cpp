#include <cstdio>
#include <map>
using namespace std;
map<int,double> m;
int main()
{
	int k,t1;
	double t2;
	for(int i=0;i<2;i++)
	{
		scanf("%d",&k);
		while(k--)
		{
			scanf("%d %lf",&t1,&t2);
			m[t1]+=t2;
			if(i==1 && m[t1]==0)
				m.erase(t1);
		}
	}
	printf("%d ", m.size());
	for(map<int,double>::reverse_iterator it=m.rbegin();it!=m.rend();it++)
	{
		printf(" %d %.1llf",it->first,it->second);
	}
	return 0;
	
}
/*
2 1 2.4 0 3.2
2 2 1.5 1 -2.4
*/