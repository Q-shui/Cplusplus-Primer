#include <iostream>
#include <vector>

using namespace std;

//int main()
//{
//	string s("some thing");
//
//	if (s.begin() != s.end()) 
//	{
//		auto it = s.begin();
//
//		*it = toupper(*it);
//	}
//	
//	cout << s << endl;
//
//	return 0;
//}

//int main()
//{
//	string s("some thing");
//
//	for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
//		*it = toupper(*it);
//
//	cout << s << endl;
//
//	return 0;
//}

//begin end 迭代器的类型

//int main()
//{
//	vector<int> v;
//	const vector<int> cv;
//
//	auto it1 = v.begin();//it1的类型是 vector<int>::iterator;
//	auto it2 = cv.begin();//it2的类型是 vector<int>::const_iterator;
//
//	//可以通过专门的函数得到 vector<int>::const_iterator
//
//	auto it3 = v.cbegin();
//
//	return 0;
//}

//int main()
//{
//	vector<string> vs;
//
//	auto it = vs.begin();
//
//	(*it).empty();//解引用再使用点操作符访问类型成员
//
//	it->empty();//箭头左侧对象是指针，右侧是对象成员
//	//两者等价
//
//
//
//	return 0;
//}

//int main()
//{
//	vector<string> text;
//
//	for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
//	{
//		for (int i = 0; i < it->size(); i++)
//			if (!isspace((*it)[i]))
//				(*it)[i] = toupper((*it)[i]);
//	}
//
//	for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
//		cout << *it << endl;
//
//	return 0;
//}

int main()
{
	vector<int> a(10, 1);

	for (auto it = a.begin(); it != a.end(); ++it)
	{
		*it *= 2;
		cout << *it << endl;
	}
		


	return 0;
}