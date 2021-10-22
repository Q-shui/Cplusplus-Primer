#include <iostream>
#include <vector>

using namespace std;

//int main()
//{
//	int i = 0, j = 0;
//
//	j = ++i;//j = 1; i = 1;
//
//	cout << j << i << endl;
//
//	j = i++;//j = 1; i = 2;
//
//	cout << j << i << endl;
//
//	vector<int> a = { 1, 2, 3 };
//
//	auto pbeg = a.begin();
//
//	while (pbeg != a.end() && *pbeg >= 0)
//		cout << *++pbeg << endl;//*pbed++ == *pbeg; pbeg++;
//
//	return 0;
//}

//成员访问运算符
//
//int main()
//{
//	string str = "A string";
//
//	string* p = &str;
//
//	auto n = str.size();
//	auto m = p->size();
//	auto o = (*p).size();
//	//等价
//
//
//
//	return 0;
//}

//条件运算符

//int main()
//{
//	int grade;
//
//	string finalgrade = grade < 60 ? "fail" : "pass";
//
//	//允许嵌套
//
//	finalgrade = grade > 90 ? "highgrade" : grade < 60 ? "fail" : "pass";
//
//	cout << ((grade < 60) ? "fail" : "pass") << endl;
//
//	return 0;
//}

int main()
{
	vector<int> a = { 1, 2, 3, 4, 5 };
	auto pa = a.begin();

	while (pa != a.end())
	{
		int i = (*pa) % 2 == 0 ? 1 : 2;

		(*pa) *= i;

		cout << *pa << endl;
		pa++;
	}

	cout << endl;

	return 0;
}