#include<cstdio>
#include<algorithm>
#include<map>
using namespace std;
map<int,int> m;
int main()
{
	int n,ans_num=0,ans_no;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int t1,t2;
		scanf("%d%d",&t1,&t2);
		m[t1]+=t2;
		if(m[t1]>ans_num)
			ans_num=m[t1],ans_no=t1;
	}
	printf("%d %d",ans_no,ans_num);
	return 0;
}