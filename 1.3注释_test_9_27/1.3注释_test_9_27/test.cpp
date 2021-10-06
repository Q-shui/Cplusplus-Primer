#include <iostream>

//注释不能嵌套 尽量使用 //
///* 这是一行注释
///**/这是不被允许的
//*/

/*
* 简单注释
*/

//int main()
//{
//	std::cout << "Enter two numbers :" << std::endl;
//
//	int v1, v2;//在第一次使用前定义，尽量初始化值，避免使用的时候出差错
//
//	std::cin >> v1 >> v2;
//
//	std::cout << "sum is " << v1 + v2 << std::endl;
//
//	return 0;
//}

///*/**/*/

int main()
{
//	std::cout << ;//应输入表达式,没有右侧操作对象
	std::cout << "/*";
	std::cout << "*/";
	//std::cout << /*"*/"";//   /* 与第一个遇见的*/配对;
	std::cout << /*"*/"/*"/*"*/;//   */ 也是从下往上与第一个遇见的*/匹配


	return 0;
}