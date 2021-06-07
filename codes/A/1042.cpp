#include<cstdio>
#include<vector>
#include<string>
#include<iostream>

using namespace std;
vector<string> v1(1), v2(55);
int fx[55], k;
char sarray[5] = { '\0','S','H','C','D' };
void myprint(vector<string>& v)
{
	for (int i = 1; i < 54; i++)
	{
		cout << v[i] << " ";
	}
	cout << v[54];

}
int main()
{
	scanf("%d", &k);

	for (int i = 1; i <= 4; i++)
	{
		char ctmp = sarray[i];
		for (int j = 1; j <= 13; j++)
		{
			string stmp = ctmp + to_string(j);
			v1.push_back(stmp);
		}
	}
	string s1 = "J1", s2 = "J2";
	v1.push_back(s1), v1.push_back(s2);

	for (int i = 1; i <= 54; i++)
	{
		scanf("%d", &fx[i]);
		//if(k>0)
			//v2[fx[i]] = v1[i];
	}
	while (k)
	{
		for (int i = 1; i <= 54; i++) 
			v2[fx[i]] = v1[i];
		k--;
		if (k == 0)
		{
			myprint(v2);
			return 0;
		}

		for (int i = 1; i <= 54; i++)
			v1[fx[i]] = v2[i];
		k--;
	}
	myprint(v1);
	

	
	return 0;

}