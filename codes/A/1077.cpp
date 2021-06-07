#include<cstdio>
#include<string>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	string ans="@";
	getchar();
	for(int i=0;i<n;i++)
	{
		string s;
		getline(cin,s);
		if(ans=="@")
			ans=s;
		else
		{
			int p1=s.size()-1,p2=ans.size()-1;
			for(;p1>=0 && p2>=0;p1--,p2--)
				if(s[p1]!=ans[p2])
					break;
			ans=ans.substr(p2+1);
		}
	}
	if(ans.empty())
		cout<<"nai";
	else
		cout<<ans;
	return 0;
}
