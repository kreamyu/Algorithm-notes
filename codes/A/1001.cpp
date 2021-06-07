#include<cstdio>
#include<string>
#include<iostream>
using namespace std;

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	a+=b;
	string s=to_string(a),ans="";
	for(int i=s.size()-1,k=0;i>=0;i--)
	{
		ans=s[i]+ans;
		if(k==2 && s[i]>='0' && s[i]<='9' && i>0 && s[i-1]>='0' && s[i-1]<='9')
		{
			ans=','+ans;
			k=0;
		}
		else k++;
	}
	cout<<ans;
	return 0;
}