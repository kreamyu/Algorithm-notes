9
98
987
9876
98765
987654
9876543
98765432
987654321
9876543210+		ans	"yi Shi  Wan "	std::string &

#include<cstdio>
#include<string>
#include<iostream>
#include<vector>
using namespace std;
vector<string> vs{"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
vector<string> dw{"Shi","Bai","Qian","Wan","Yi"};
string solu(string &tar,string &ans)
{
	if(tar.size()==1)
		return ans+" "+vs[tar[0]-'0'];
	if(tar.size()<5)
	{
		string s=vs[tar[0]-'0']+dw[tar.size()];
		return solu(tar.substr(1),"");
	}
	if(tar.size()<9)
	{
		string s1=solu(tar.substr(0,tar.size()-4))+" "+"Wan";
		return solu(tar.substr(tar.size()-4),s1);
	}
	if(tar.size()==9)
	{
		string s=vs[tar[0]-'0']+"Yi";
		return solu(tar.substr(1),s);
	}
}
int main()
{
	int n,flag=0;
	// if(n<0)
	// 	flag=1,n=-n;
	while(true)
	{
		scanf("%d",&n);
		string s="";
		cout<<solu(to_string(n),s)<<endl;
	}

}