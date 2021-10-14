#include <string>
#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

//对string对象的定义和初始化

//int main()
//{
//	string s1;
//	string s2(s1);
//	string s3(s1);//s3不是s1的引用
//
//	//string s3("value");
//	s3 = "value";//拷贝初始化
//	string s4(10, 'c');//直接初始化
//
//	string s8 = string(10, 'c');//先直接初始化，再拷贝
//
//	string tmp(10, 'c');
//	string s9 = tmp;//同上等价
//
//	return 0;
//}

//string对象上的操作

//int main()
//{
//	string s;
//
//	cin >> s;//会自动忽略开头的空格
//	cout << s << endl;
//
//	return 0;
//}

//int main()
//{
//	string s;
//	while (cin >> s)
//		cout << s << endl;//遇到文件结束符停止 即ctrl + z;
//
//	return 0;
//}

//int main()
//{
//	string s;
//	/*while (getline(cin, s))
//		cout << s << endl;*/
//	/*while (cin >> s)
//		cout << s << endl;*/
//
//	//while (getline(cin, s))
//	//{
//	//	if (!s.empty())
//	//		cout << s << endl;
//	//}//输出非空字符
//
//	//while (getline(cin, s))
//	//{
//	//	if (s.size() > 70)
//	//		cout << s << endl;
//	//}//输出长度超过70的字符
//
//
//
//	return 0;
//}

//int main()
//{
//	string s;
//	//getline(cin, s);//输入‘		a b'，输出’	a b‘
//	cin >> s;//输入‘	a b’，输出a
//	cout << s << endl;
//
//	return 0;
//}

//int main()
//{
//	string s1, s2;
//	cin >> s1 >> s2;
//
//	if (s1 == s2)
//		cout << "s1 is equal to s2." << endl;
//	else if (s1 > s2)
//		cout << s1 << endl;
//	else
//		cout << s2 << endl;
//
//	return 0;
//}

//int main()
//{
//	string s, s1;
//
//	//while (getline(cin, s1))
//	//	s += s1;//无空格
//
//	while (getline(cin, s1))
//	{
//		s1 += ' ';
//		s += s1;
//	}
//
//
//	cout << s << endl;
//}

//int main()
//{
//	string str = "something";
//	string s = "hello world!!!.";
//	decltype(s.size()) punct_cnt = 0;//punct_cnt的类型是string::size_type
//
//	for (auto c : str)
//		cout << c << endl;
//
//	for (auto b : s)
//		if (ispunct(b))
//			++punct_cnt;
//
//	cout << punct_cnt << endl;
//
//
//
//	return 0;
//}

//int main()
//{
//	string str = "something";
//
//	for (auto &c : str)//循环里面改变的是c的值，想要改变str的值就要使用引用
//		c = toupper(c);
//
//	cout << str << endl;
//
//	return 0;
//}

