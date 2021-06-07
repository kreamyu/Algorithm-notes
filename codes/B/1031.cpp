#include<cstdio>
#include<string>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int iz[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char im[11]={'1','0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
vector<string> ans;
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		int sum=0;
		for(int i=0;i<17;i++)
		{
			sum+=(s[i]-'0')*iz[i];
		}
		if(im[sum%11]!=s[17])
			ans.push_back(s);
	}
	if(ans.empty())
		printf("All passed");
	else
		for(int i=0;i<ans.size();i++)
			printf("%s\n",ans[i].c_str() );
	return 0;
}