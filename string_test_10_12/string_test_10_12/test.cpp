#include <iostream>

using namespace std;

//int main()
//{
//	string s("some thing");
//
//	s[0] = toupper(s[0]);
//	
//	cout << s << endl;//首字母大写
//
//	//for (decltype(s.size()) index = 0;
//	//	index != s.size() && !isspace(s[index]);
//	//	++index)
//	//	s[index] = toupper(s[index]);
//
//	//cout << s << endl;//首单词大写
//
//	//下标可以执行随机访问
//
//	return 0;
//}

//int main()
//{
//	string s("some thing");
//
//	for (auto& c : s)
//		c = 'x';
//
//	cout << s << endl;
//	//换成char没什么大问题
//}

//int main()
//{
//	string s("something");
//	int i = 0;
//
//	while (s[i] != '\0')
//	{
//		s[i] = 'x';
//		i++;
//	}
//		
//
//	cout << s << endl;
//
//	return 0;
//}

//int main()
//{
//	string s("ab");
//
//	cout << s[0] << endl;
//
//	return 0;
//}

//int main()
//{
//	string s = "..he..llo, world!!!";
//
//	for (decltype(s.size()) index = 0; index < s.size(); index++)
//		if (!ispunct(s[index]))
//			cout << s[index];
//
//	return 0;
//}

int main()
{
	const string s = "hello";

	auto& c = s;

	return 0;
}