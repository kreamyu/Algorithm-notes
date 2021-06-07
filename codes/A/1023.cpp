#include<cstdio>
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
struct bign{
	int d[1001],len;
	bign(){
		memset(d,0,sizeof d);
		len=0;
	}
};
bign bigadd(bign a,bign b)
{
	bign c;
	int carry=0;
	for(int i=0;i<a.len || i<b.len;i++)
	{
		c.d[i]=a.d[i]+b.d[i]+carry;
		carry=c.d[i]/10;
		c.d[c.len++]%=10;
	}
	if(carry)
		c.d[c.len++]=carry;
	return c;
}
bign revelbig(bign a)
{
	bign b;
	b.len=a.len;
	for(int i=0;i<a.len;i++)
		b.d[i]=a.d[a.len-1-i];
	return b;
}
bool check(bign a)
{
	int l=0,r=a.len-1;
	while(l<r)
	{
		if(a.d[l]!=a.d[r]) return false;
		l++,r--;
	}
	return true;
}
int main()
{
	string s;
	int k,count=0;
	cin>>s>>k;
	bign a;
	a.len=s.size();
	for(int i=0;i<a.len;i++)
		a.d[i]=s[a.len-1-i]-'0';
	for(;count<k;count++)
	{
		if(check(a)) break;
		a=bigadd(a,revelbig(a));
	}
	for(int i=a.len-1;i>=0;i--)
		printf("%d", a.d[i]);
	printf("\n%d",count);
	return 0;
}