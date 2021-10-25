#include <iostream>

using namespace std;

//int main()
//{
//	int val = 0;
//	int sum = 0;
//
//	val + 5;//val的值并没有被改变
//
//	;//空语句
//
//	string s;
//	string sought = "s";
//
//	while (cin >> s && s != sought)
//		;//while循环即可决解问题;
//
//	int v1 = 0, v2 = 0;
//
//	val = v1 + v2;;//第二个分号是一条空语句;
//
//	while (val != 5);
//		++val;//这个语句并不包含在循环中;
//	
//	while (val <= 10 ? val++ : 0)
//		sum += val;
//
//	return 0;
//}

int main()
{
	int sum = 0;
	int val = 1;

	while (val <= 10 ? sum += val : 0)
		++val;

	cout << sum << endl;

	return 0;
}