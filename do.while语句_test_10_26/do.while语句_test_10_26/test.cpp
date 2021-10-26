#include <iostream>
#include <vector>

using namespace std;

//int main()
//{
//	string rsp;
//
//	do
//	{
//		int val1, val2;
//
//		cin >> val1 >> val2;//输入两个数
//
//		cout << val1 + val2 << endl;//输出两个数的和
//
//		cin >> rsp;//是否继续
//	} while (!rsp.empty() && rsp[0] != 'n');//以n或空字符串开头结束循环
//
//	return 0;
//}

//int main()
//{
//	do
//	{
//		int val1, val2;
//
//		if (cin >> val1 >> val2)
//			cout << val1 + val2 << endl;
//
//	} while (cin);
//
//	return 0;
//}

int main()
{
	string rsp;

	do
	{
		string s1, s2;

		cout << "please enter two strings:" << endl;
		cin >> s1 >> s2;

		cout << (s1 < s2 ? s1 : s2) << endl;

		cout << "do you want to try again ? yes/no" << endl;
		cin >> rsp;
	} while (!rsp.empty() && rsp[0] != 'n');


	return 0;
}