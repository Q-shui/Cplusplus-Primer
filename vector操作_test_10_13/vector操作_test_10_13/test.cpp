#include <iostream>
#include <vector>

using namespace std;

//int main()
//{
//	vector<int> a;
//
//	for (int i = 0; i < 1000; i++)
//		a.push_back(i);
//
//	string word;
//	vector<string> s;
//
//	while (cin >> word)
//		s.push_back(word);
//
//	return 0;
//}

//int main()
//{
//	int a;
//	vector<int> va;
//
//	while (cin >> a)
//		va.push_back(a);
//
//	return 0;
//}

//int main()
//{
//	string word;
//	vector<string> vs;
//
//	while (cin >> word)
//		vs.push_back(word);
//
//	return 0;
//}

//v.empty 判空
//v.size 元素个数
//v.push_back(t) 尾插
//v[n]

//int main()
//{
//	vector<int> v;
//
//	for (int i = 1; i < 10; i++)
//		v.push_back(i);
//
//	for (auto& i : v)
//		i *= i;
//
//	for (auto& i : v)
//		cout << i << endl;
//
//	return 0;
//}

//int main()
//{
//	vector<unsigned> scores(11, 0);//11个分数段
//	unsigned grade;
//
//	while (cin >> grade)
//		if (grade <= 100)
//			++scores[grade / 10];//对应分数段+1；
//
//	return 0;
//}

//int main()
//{
//	string s;
//	vector<string> vs;
//
//	while (cin >> s)
//		vs.push_back(s);
//
//	for (int i = 0; i < (int)vs.size(); i++)
//		for (int j = 0; j < vs[i].size(); j++)
//			vs[i][j] = toupper(vs[i][j]);
//
//	for (int i = 0; i < (int)vs.size(); i++)
//		cout << vs[i] << endl;
//
//
//	return 0;
//}