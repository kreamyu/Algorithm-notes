#include<cstdio>
#include<string>
#include<iostream>
#include<vector>
using namespace std;
vector<string> vs{"0","1","2","3","4","5","6","7","8","9","A","B","C"};
void myprint(int x)
{
	string res="";
	while(x)
	{
		res=vs[x%13]+res;
		x/=13;
	}
	if(res.size()==0)
		res="0";
	if(res.size()==1)
	{
		cout<<"0"<<res;
	}
	else cout<<res;
}
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("#");
	myprint(a);
	myprint(b);
	myprint(c);
	return 0;
}