#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	double temp;
    long double ans;
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lf",&temp);
		ans+=(n-i+1)*temp*i;
	}
	printf("%.2llf",ans);
	return 0;
}