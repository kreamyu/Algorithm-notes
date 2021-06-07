#include<cstdio>
#include<vector>
using namespace std;
vector<int> v;
int main()
{
	int t1,t2,d;
	scanf("%d%d%d",&t1,&t2,&d);
	t1+=t2;
	while(t1)
	{
		v.push_back(t1%d);
		t1/=d;
	}
	if(v.empty())
		printf("0");
	else
		for(int i=v.size()-1;i>=0;i--)
			printf("%d",v[i]);
	return 0;
}