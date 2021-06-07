#include<cstdio>
#include<string>
#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n=s.size(),t,n2;
	if((n-1)%3==0)
		t=(n-1)/3,n2=t+1;
	else if((n-1)%3==1)
		t=(n-2)/3,n2=t+2;
	else t=(n-3)/3,n2=t+3;
	int l=0,r=n-1;
	for(int i=0;i<t;i++)
	{
		printf("%c",s[l++]);
		for(int j=0;j<n2-2;j++)
			printf(" ");
		printf("%c\n",s[r--]);
	}
	while(l<=r)
	{
		printf("%c",s[l++]);
	}
	return 0;
}