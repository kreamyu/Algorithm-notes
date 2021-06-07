#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool cmp1(char a,char b)
{
	return a>b;
}
bool cmp2(char a,char b)
{
	return a<b;
}
int btos(int x)
{
	string s=to_string(x);
	for(int i=0;i<4-s.size();i++)
		s='0'+s;
	sort(s.begin(),s.end(),cmp1);
	return atoi(s.c_str());
}
int stob(int x)
{
	string s=to_string(x);
	for(int i=0;i<4-s.size();i++)
		s='0'+s;
	sort(s.begin(),s.end(),cmp2);
	return atoi(s.c_str());
}
int main()
{
	int n;
	scanf("%d",&n);
	while(true)
	{
		int t1=btos(n),t2=stob(n),t3=t1-t2;
		printf("%04d - %04d = %04d\n",t1,t2,t3);
		if(t3==0 || t3==6174)
			break;
		n=t3;
	}
	return 0;
}