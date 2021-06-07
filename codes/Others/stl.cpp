#include<cstdio>
#include<iostream>

#include<vector>
#include<set>
#include<string>

using namespace std;

// vector
	// 定义
		vector<typename> v;
		vector<vector<int> > v;
		vector<int> vi[100];//vi[i]是一个vector,其一维是固定的
	// 访问
		for(int i=0;i<v.size();i++)
			cout<<v[i];
		// begin()是取v的首元素地址,end()是尾元素的下一个地址
		// 注意：只有it!=v.end(),没有it<v.end();
		for(vector<int>::iterator it=v.begin();it!=v.end();it++)
			cout<<(*it);
		v[i] == *(it+i);
		// 常用stl容器中，只有vector和string才能使用v.begin+3这种迭代器加整数的写法
	// 常用函数
		v.push_back(x);//O(1)
		v.pop_back();//O(1)
		v.size();//O(1) 返回unsigned类型，用%d不会出很大问题
		v.clear();//O(N)
		v.insert(it,x);//O(N) v.insert(v.begin+2,x)
		v.erase(it);
		v.erase(first,last);//删除[first,last)所有元素
		v.erase(v.begin(),v.end());// == v.clear();
	// 用途
		// 存储数据，动态数组，记录输出
		// 用邻接表存图

// set 内部自动有序 不含重复元素
	// 定义
		set<int> s;
		set<int> s[100];
	// 访问
		for(set<int>:: iterator it=s.begin();it!=s.end();it++)
			cout << *it; 
	// 常用函数
		s.insert(x);// O(logN)
		s.find(value);// O(logN) 返回set中值为value的迭代器
		set<int>:: iterator it=s.find(value);
		s.erase(it);// O(1)
		s.erase(s.find(100));
		s.erase(value);// O(logN)
		s.erase(100);
		s.erase(first,last);// O(last-first)
		s.size();// O(1)
		s.clear();// O(N)
	// 用途
		// 自动去重并升序排序，对于去重又不方便开数组的情况很合适
		// set中元素唯一，multiset可处理元素不唯一的情况
		// c++11 中unordered_set能处理只去重不排序的需求，速度比set快很多

// string 
	// 定义
		string s;
		string str="abcd";
	// 访问
		for(int i=0;i<s.size();i++)
			printf("%c",s[i]);
		//要输入输出整个字符串只能用cin和cout
		cin>>s;
		cout<<s;
		//printf要这样用
		printf("%s", s.c_str());
		for(string::iterator it=str.begin();it!=str.end();it++)
			printf("%c",*it);
		//string与vecotr一样可以使用s.begin()+3这种形式
	// 常用函数
		string s1,s2;
		s1+=s2;
		//两个string可直接使用== <= >= > < != 根据字典序
		s.length();s.size();//一个东西 O(1)

		s.insert(pos,string);
			string s1="abc",s2="cdf";
			s1.insert(1,s2);// "acdfbc"

		s.insert(it,it2,it3);
			string s1="abc",s2="cdf";//[it2,it3)
			s1.insert(s1.begin+1,s2.begin(),s2.end());

		s.erase(it);//O(N)
		s.erase(first,last);//O(N)
		s.erase(pos,length);//O(N)

		s.clear();//O(1)

		s.substr(pos,len);//O(len)

		string::npos; //值为-1/4294967295 unsigned_int类型 作为find()失配时的返回值

		//O(nm)
		s1.find(s2);//s2是s1的字串返回s2第一次出现的位置，不是字串返回string::npos
		s1.find(s2,pos);//从pos开始匹配s2

		s1.replace(pos,len,str2);//pos开始len长的字串替换为str2 O(str.length)


	// 用途

// map 会按键从小到大排序
	// 定义
		map<string,int> m;
	// 访问
		m["kreamyu"]=1;

		for(map<string,int>::iterator it=m.begin();it!=m.end();m++)
			cout<< it->first << " " << it->second;
	// 常用函数
		map<string,int>::iterator it=m.find(key);// O(logN)
		
		m.erase(it);// O(1)
		m.erase(key);// O(logN)
		m.erase(first,end);// O(last-first)
		m.size();// O(1)
		m/clear();//O(N);
	// 用途
		/*
			建立字符串与整数之间的映射
			判断大整数或其他类型数据是否存在
			map的键值是唯一的,如需一键对应多值只能用multimap
			c++11 unorderd_map使用散列代替红黑树,不对键进行排序但速度更快
		*/

// queue 
	// 定义
		queue<int> q;
	// 访问
		q.front();// O(1)
		q.back();// O(1)
	// 常用函数
		q.push(x);// O(1)
		q.pop();// O(1)
		q.empty();// O(1)
		q.size();// O(1)
	// 用途
		/*
			广度搜索
			使用front()和back()必须判断队列是否非空
		*/
// priority_queue 
	// 定义
		priority_queue<int> pqi;
	// 访问
		// 没有front()和back(),只能使用top()访问队首元素/堆顶元素/优先级最高的
		pqi.top();
	// 常用函数
		pqi.push(x);// O(logn)
		pqi.top();// O(1)
		pqi.pop(x);// O(logn)
		pqi.empty();// O(1)
		pqi.size();// O(1)
		// 定义优先级
			//一般
				priority_queue<int/double/char> pqi; //默认越大越优先
				priority_queue<int> pqi; 等价于 priority_queue<int,vector<int>,less<int>> pqi;
				priority_queue<int,vector<int>,greater<int>> pqi;
				/*
					第二个参数为承担堆的容器,数据类型与优先队列类型相同,
					第三个参数是对第一个参数的比较类,
					less<int> 表示数字越大优先级越大,greater<int> 表示数字越小优先级越大
				*/
			//结构体
				struct fruit{
					string name;
					int price;
					
					// 1
						/*
							friend为友元
							bool operator < (fruit f1,fruit f2)是对fruit的操作符进行重载,
							且只需重载小于号,大的会编译错误
						*/
						friend bool operator < (const fruit &f1,const fruit &f2){
							return f1.price < f2.price;//以价格高的水果优先
						};
						priority_queue<fruit> q;
					
					// 2
						struct cmp{
							bool operator () (const fruit &f1,const fruit &f2) {
								return f1.price > f2.price;
							}
						}
						priority_queue<fruit,vector<fruit>,cmp> q;
				}
	// 用途
		// 解决一些贪心问题
		// 优化dijkstra
		// 使用top()需判断优先队列是否为空

// stack
	// 定义
		stack<int> s;
	// 访问
		s.top();//只能通过top()访问栈顶元素
	// 常用函数
		s.push(x);//O(1)
		s.pop();//O(1)
		s.top();//O(1)
		s.empty();//O(1)
		s.size();//O(1)
	// 用途
		// 模拟实现递归

// pair 头文件map中已包含
	// 定义
		pair<int,string> pis("haha",5);
		// 临时构建pair
		   pair<string,int>("haha",5);
		   make_pair("haha",5);      
	// 访问
	   pair<int,int> pii;
	   p.first=1;
	   p.second=2;
	   p=pair<int,int>(3,5);
	   p=make_pair(5,3);
	   cout << p.first << p.second;
	// 常用函数
	   == != < > <= >=
	// 用途
	   // 代替二元结构体及其构造函数
	   // 作为map键值对插入
	   	map<string,int> mp;
	   	mp.insert(make_pair("haha",5));
	   	mp.insert(pair<string,int>("haha",5));
	   	for(map<string,int>::iterator it=mp.begin();it!=mp.end();it++)
	   		cout<< mp.first << " " << mp.second;

// algorithm 
	max(a,b);//参数必须是两个,可以是浮点数
	min();
	abs(x);//x必须是整数,浮点数的绝对值需要使用<cmath>下的fabs
	swap(a,b);
	reverse(it1,it2);//可以将数组指针在[it1,it2)之间的元素或容器的迭代器在其范围内进行反转
		int a[4]={4,3,2,1};
		reverse(a+1,a+3);
		string s="afagagh";
		reverse(s.begin()+3,s.begin()+6);
	next_permutation();//输出一个序列在全排列中的下一个序列
		int a[4]={1,2,3};
		do{
			printf("%d%d%d\n",a[0],a[1],a[2]);
		}while(next_permutation(a,a+3));
	fill(a,a+5,233);//相比于memset能填充任意值
	sort(a.begin(),a.end(),cmp);
		//太多省略
		//stl中只有vector,string,deque可以使用sort,set和map等不行
	lower_bound(first,last,val);//寻找[first,last)范围内第一个>=val的元素数组则返回该位置的指针,容器返回该位置的迭代器
	upper_bound();//寻找[first,last)范围内第一个>val的元素数组则返回该位置的指针,容器返回该位置的迭代器

