#include <iostream>
#include <vector>
#include <cstddef>

using namespace std;

//int main()
//{
//	unsigned scores[11] = { 0 };
//	unsigned grade;
//
//	while (cin >> grade)
//		++scores[grade / 10];
//
//	for (auto i : scores)
//		cout << i << " ";
//
//	cout << endl;
//
//	return 0;
//}

//int main()
//{
//	int a[10];
//
//	for (int i = 0; i < 10; i++)
//		a[i] = i;
//
//	vector<int> va;
//
//	for (auto i : a)
//		va.push_back(i);
//
//	return 0;
//}

//int main()
//{
//	int ia[10] = { 0 };
//
//	auto ia2(ia);//ia2是个指针而非数组
//
//	return 0;
//}

//指针迭代器

//int main()
//{
//	int a[10] = { 0 };
//
//	int* e = &a[10];//类似与vector中的end;
//
//	for (int* i = a; i != e; i++)
//	{
//		cout << *i << endl;//遍历并输出数组元素;
//	}
//
//	int* pbeg = begin(a);
//	int* pen = end(a);//begin和end 函数
//
//
//	return 0;
//}

//指针运算

int main()
{
	constexpr size_t sz = 5;
	int arr[sz] = { 0 };
	int* p = arr;//首元素地址
	int* p2 = p + 4;//尾元素地址

	int* p3 = p + sz;//不能解引用，因为是尾元素的下一个位置

	int* p4 = p + 10;//p4的值未定义

	return 0;
}