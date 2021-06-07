#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;
struct bign{
	int d[1002],len;
	bign(){
		memset(d,0,sizeof d);
		len=0;
	}
};
bign divi(bign a,int b,int& r)
{
	bign c;
	c.len=a.len;
	for(int i=a.len-1;i>=0;i--)
	{
		r=r*10+a.d[i];
		if(r<b) c.d[i]=0;
		else
		{
			c.d[i]=r/b;
			r=r%b;
		}
	}	
	while(c.len>0 && c.d[c.len-1]==0)
		c.len--;
	return c;
}
int main()
{
	string sa;
	int b,r=0;
	cin>>sa>>b;
	bign a;
	a.len=sa.size();
	for(int i=0;i<a.len;i++)
		a.d[i]=sa[a.len-i-1]-'0';
	a=divi(a,b,r);
	for(int i=a.len-1;i>=0;i--)
		printf("%d", a.d[i]);
	if(a.len<=0)
		printf("0");
	printf(" %d",r);
	return 0;
}