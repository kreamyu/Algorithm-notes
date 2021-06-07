#include<cstdio>
#include<vector>
using namespace std;
vector<int> fx;
int main()
{
	int t1,t2;
	while(scanf("%d%d",&t1,&t2)!=-1)
	{
		t1*=t2;
		t2--;
		if(t2>=0)
		{
			fx.push_back(t1);
			fx.push_back(t2);
		}
		else break;
	}
	if(!fx.empty())
        printf("%d",fx[0]);
    else 
        printf("0 0");
	for(int i=1;i<fx.size();i++)
	{
		printf(" %d",fx[i]);
	}
	return 0;
}