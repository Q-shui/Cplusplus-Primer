#include <iostream>

using namespace std;

//int main()
//{
//	int ia[3][4];
//
//	int(*p)[4] = ia;//p是个指针，指向四个元素的数组，数组类型是int
//
//	p = &ia[2];//p指向ia的尾元素
//
//	for (auto p = ia; p != ia + 3; p++)//auto关键字自动把p转换成数组指针类型;p指向的内容是个整数
//	{
//		for (auto q = *p; q != *p + 4; q++)
//			cout << *p << ' ';
//		cout << endl;
//	}
//
//	for (auto p = begin(ia); p != end(ia); p++)
//	{
//		for (auto q = begin(*p); q != end(*p); q++)//*p 指的是数组名
//			cout << *p << ' ';
//		cout << endl;
//	}
//
//	return 0;
//}

//int main()
//{
//	//可以用类型别名声明多维数组
//
//	using int_array = int[4];
//
//	typedef int int_array[4];
//
//
//
//	return 0;
//}

//范围for语句打印多维数组元素

//int main()
//{
//	int ia[3][4] = { 0 };
//
//	for (auto& row : ia)
//	{
//		for (auto& col : row)
//			cout << col << ' ';
//		cout << endl;
//
//	}
//		
//	return 0;
//}

//下标for语句打印

//int main()
//{
//	int ia[3][4] = { 0 };
//
//	for (size_t i = 0; i < 3; i++)
//	{
//		for (size_t j = 0; j < 4; j++)
//			cout << ia[i][j] << ' ';
//		cout << endl;
//	}
//
//	return 0;
//}

//指针for循环

//int main()
//{
//	int ia[3][4] = { 0 };
//
//	for (auto p = ia; p != ia + 3; p++)
//	{
//		for (auto q = *p; q != *p + 4; q++)
//			cout << *q << ' ';
//		cout << endl;
//	}
//
//	return 0;
//}

//变量别名

//int main()
//{
//	int ia[3][4] = { 0 };
//	using int_array = int[4];
//
//	for (int_array* p = ia; p != ia + 3; p++)
//	{
//		for (int* q = *p; q != *p + 4; ++q)
//			cout << *q << ' ';
//		cout << endl;
//	}
//
//	return 0;
//}

//使用auto

int main()
{
	int ia[3][4] = { 0 };
	using int_array = int[4];

	for (auto p = ia; p != ia + 3; p++)
	{
		for (auto q = *p; q != *p + 4; ++q)
			cout << *q << ' ';
		cout << endl;
	}

	return 0;
}