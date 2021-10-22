#include <iostream>

using namespace std;

//赋值运算符的左侧必须是可修改的左值

//int main()
//{
//	int i = 0, j = 0, k = 0;
//	const int ci = i;//都是初始化不是赋值;
//
//	/*
//	1024 = k;//字面值1024是右值
//	i + j = k;//算术表达式是右值
//	ci = k;//字面值常量是不可修改的左值;
//	*/
//
//	k = 0;
//	k = 3.14;//结果转换成3;
//
//	k = { 'a'};//可以进行增长变换，不能进行缩短变换,只能用比k类型字节少的;
//
//
//
//	return 0;
//}

//int main()
//{
//	int i;
//	double d;
//
//	i = d = 3.5;
//
//	cout << i << d << endl;
//
//	return 0;
//}

int main()
{
	int i;

	//if (42 = i) 非法

	if (i = 42);

	double dval;
	int val;
	int* pi = NULL;

	dval = val = *pi = 0;


	return 0;
}