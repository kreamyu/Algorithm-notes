#include<cstdio>
#include<string>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	string s1, s2, s3, s4;
	cin >> s1 >> s2 >> s3 >> s4;
	int ans1 = 0, ans2=0, ans3=0;
	for (int i = 0; i < min(s1.size(), s2.size()); i++)
	{
		if (ans1 != 0 && s1[i] == s2[i])
		{
			if (s1[i] >= '0' && s1[i] <= '9')
				ans2 = s1[i] - '0';
			else if (s1[i] >= 'A' && s1[i] <= 'N')
				ans2 = s1[i] - 'A' + 10;
			if(ans2!=0)
            break;
		}
		if (ans1 == 0 && s1[i] == s2[i] && s1[i] >= 'A' && s1[i] <= 'G')
			ans1 = s1[i] - 'A' + 1;
		
	}
	for (int i = 0; i < min(s3.size(), s4.size()); i++)
		if (s3[i] == s4[i] && ((s3[i]>='A' && s3[i]<='Z')||(s3[i] >= 'a' && s3[i] <= 'z')))
		{
			ans3 = i;
			break;
		}
	vector<string> v{ "MON","TUE","WED","THU","FRI","SAT","SUN" };
	cout << v[ans1 - 1];
	printf(" %02d:%02d", ans2, ans3);
	return 0;
}
