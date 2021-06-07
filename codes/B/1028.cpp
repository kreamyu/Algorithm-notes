#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

//1 i1>i2 0 i1=i2 -1 i1<i2
int cmp(int y1,int m1,int d1,int y2,int m2,int d2)
{
	if(y1==y2)
	{
		if(m1==m2)
		{
			if(d1==d2)
				return 0;
			else return d1>d2? 1:-1;
		}
		else return m1>m2? 1:-1;
	}
	else return y1>y2? 1:-1;
}
bool check(int y,int m,int d)
{
	if(cmp(y,m,d,2014,9,6)==1)
	{
		return false;
	}
	if(cmp(y,m,d,1814,9,6)==-1)
		return false;
	return true;
}
int n,ans=0;
int y1=2017,y2,m1,m2,d1,d2,ty,tm,td;
int main()
{

	string s1,s2,ts;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		cin>>ts;
		scanf("%d/%d/%d",&ty,&tm,&td);
		if(check(ty,tm,td))
		{
			ans++;
			if(cmp(ty,tm,td,y1,m1,d1)==-1)
				y1=ty,m1=tm,d1=td,s1=ts;
			if(cmp(ty,tm,td,y2,m2,d2)==1)
				y2=ty,m2=tm,d2=td,s2=ts;
		}
	}
	printf("%d ",ans );
	cout<<s1<<" "<<s2;
	return 0;
}