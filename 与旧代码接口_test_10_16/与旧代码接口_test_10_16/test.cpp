#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

//int main()
//{
//	string s("hello");//c风格字符串初始化string对象
//
//	//char* str = s;//不能用string对象初始化c风格字符串
//
//	const char* str = s.c_str();//c_str() 把string类型转化成c语言字符串格式
//	//但s的格式并没有改变
//
//	int int_arr[] = { 1, 2, 3 };
//
//	vector<int> iva(begin(int_arr), end(int_arr));//用数组初始化vector对象
//
//
//
//	return 0;
//}

//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5 };
//
//	vector<int> va(a + 1, a + 3);
//
//	return 0;
//}

int main()
{
	vector<int> va(10, 1);

	const int i = va.size();
	int a[10];

	for (int i = 0; i < va.size(); i++)
		a[i] = va[i];


	return 0;
}