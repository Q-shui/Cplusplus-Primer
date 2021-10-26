#include <iostream>
#include <vector>

using namespace std;

//int main()
//{
//	string s;
//	vector<int> v;
//
//	for (decltype(s.size()) index = 0; 
//		index != s.size() && !isspace(s[index]); 
//		++index)//init-statement; condition; expression;
//		s[index] = toupper(s[index]);
//
//	for (decltype(v.size()) i = 0, sz = v.size(); i != sz; i++);//可以定义多个
//
//	auto beg = v.begin();
//
//	for (; beg != v.end(); beg++);//定义语句为空
//
//	vector<int> a;
//
//	for (int i = 0; cin >> i; )//无需迭代部分
//		a.push_back(i);
//
//
//
//	return 0;
//}

//int main()
//{
//	int ix = 0;
//	int sz = 10;
//
//	for (; ix != sz; ++ix)
//		cout << ix << endl;
//
//	return 0;
//}

int main()
{
	vector<int> v1{ 0, 1, 1, 2, 3, 5, 8 };
	vector<int> v2{ 0, 1, 1, 2 };

	int shorts = v1.size();
	int longs = v2.size();

	if (shorts > longs)
	{
		shorts = v2.size();
		longs = v1.size();
	}

	for (int index = 0; index < shorts; ++index)
		if (v1[index] != v2[index])
		{
			cout << 0 << endl;
			break;
		}

	return 0;
}