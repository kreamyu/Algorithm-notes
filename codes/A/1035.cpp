#include<cstdio>
#include<string>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<pair<string,string>> v;
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		string s1,s2,s3="";
		cin>>s1>>s2;
		for(int i=0;i<s2.size();i++)
		{
			if(s2[i]=='1')
				s3+='@';
			else if(s2[i]=='0')
				s3+='%';
			else if(s2[i]=='l')
				s3+='L';
			else if(s2[i]=='O')
				s3+='o';
			else s3+=s2[i];
		}
		if(s2!=s3)
		{
			pair<string,string> tmp{s1,s3};
			v.push_back(tmp);
		}
	}
	if(v.empty())
	{
		if(n==1)
			printf("There is %d account and no account is modified",n);
		else
			printf("There are %d accounts and no account is modified",n);
	}
	else 
	{
		cout<<v.size()<<endl;
		for(int i=0;i<v.size();i++)
			cout<<v[i].first<<" "<<v[i].second<<endl;
	}
	return 0;
}