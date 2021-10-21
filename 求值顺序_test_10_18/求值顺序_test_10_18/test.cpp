#include <iostream>

using namespace std;

//int main()
//{
//	int i = 0;
//
//	cout << i << ' ' << ++i << endl;//未定义操作，有可能是1 1 也有可能是0 1
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	-i;//不会改变i的值，只返回一个副本
//
//	int k = -i;
//
//	bool b = true;
//
//	bool b2 = -b;//还是true
//
//	cout << i << endl;
//
//	return 0;
//}

//int main()
//{
//	short short_value = 32767;
//
//	short_value += 1;
//
//	cout << short_value << endl;//结果是-32768;
//
//	int val = 21 / 6;//结果是3
//
//	int val = 42;
//
//	double dval = 3.14;
//
//	val % 12;//正确，结果是
//	//dval % 12;//只能对整数取余
//
//	return 0;
//}

int main()
{
	cout << 12 / 3 * 4 + 5 * 15 + 24 % 5 / 2 << endl;//先取模再除;

	int n = 12;

	if (n % 2 == 0)
	{
		;
	}
	else
	{
		;
	}//判断是技术还是偶数;

	return 0;
}