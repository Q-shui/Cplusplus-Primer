#include <iostream>

//extern const int i = 42;//对const变量的定义加上extern，就可以在其他文件引用的时候只需声明
//
//int main()
//{
//	const int bufsize = 512;//定义const变量并初始化
//	//bufsize = 512;//不正确，const的值不能在被改变  表达式必须是可被修改的左值
//	//const int i = get_size();//运行时手动初始化
//	const int j = 42;//编译时初始化
//
//	//const变量能被其他值初始化，也能初始化其他值
//	int a = 42;
//	const int b = a;
//	int c = b;
//
//
//	return 0;
//}

//int main()
//{
//	//const int buf;//需初始值设定项
//	int cnt = 0;
//	const int sz = cnt;
//	++cnt;
//	//++sz;//必须是可修改的左值
//
//	return 0;
//}


//const的引用

//int main()
//{
//	const int i = 1024;
//	const int& r1 = i;
//
//	//r1 = 42;//r1是对常量的引用
//	//int& r2 = i;//i是常量
//
//
//	return 0;
//}

//int main()
//{
//	const int i = 4.2;//也可以，无论是表达式还是其他值，只要能转换成该类型即可
//
//	int j = 42;
//	const int& r1 = j;//允许const int& 引用int类型
//
//	//int& r2 = r1;//但不允许普通引用绑定常量引用
//
//
//
//	return 0;
//}

//int main()
//{
//	int i = 42;
//	int& r1 = i;
//	const int& r2 = i;
//
//	r1 = 0;
//
//	std::cout << r2 << std::endl;//常量引用值可以被修改
//
//	return 0;
//}


//指针和const


//int main()
//{
//	const double i = 3.14;
//	//double* pi = &i;//ptr是个普通指针
//	const double* cptr = &i;
//	//const int* cpi = &i;//指针的类型必须要相同
//
//	int j = 3;
//	const int* cpj = &j;
//	int* pj = &j;
//	*pj = 4;
//
//	std::cout << *cpj << *pj << std::endl;//可以通过其他值来改变 
//	
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int* const cpa = &a;//cpa的值不能被改变
//
//	const int b = 1;
//	const int* const cpb = &b;//指向常量的常量指针
//
//	*cpa = 3;
//
//	std::cout << a << std::endl;//可以通过常量指针来改变对象值
//
//	return 0;
//}

//int main()
//{
//	//int i = -1, & r = 0;
//
//	int i = 0;
//	const int j = 1;
//	i = j;
//
//	int* pi = &i;
//	//int* const cpj = &j;
//
//
//	return 0;
//}


//顶层const


//int main()
//{
//	int i = 0;
//	int* const cpi = &i;//顶层const
//
//	const int j = 1;
//	const int* cpj = &i;//底层const
//
//	const int k = 2;
//	const int* const cpk = &k;//既是顶层const，也是底层const
//
//	return 0;
//}

//int main()
//{
//	const int i = 1;
//	const int v2 = 0;
//	int v1 = v2;
//	int* p1 = &v1, & r1 = v1;
//	const int* p2 = &v2, *const p3 = &i, & r2 = v2;
//
//	r1 = v2;
//	//p1 = p2;
//	p2 = p1;
//	//p1 = p3;
//	p2 = p3;
//
//
//	return 0;
//}

//constexpr 和 常量表达式


//const int a = 1;
//int main()
//{
//	constexpr int i = 3;
//	const int j = i + 1;
//
//	const int* p = NULL;//指向常量
//	constexpr int* q = NULL;//常量指针
//
//	constexpr const int* pj = &a;
//	constexpr const int* const px = &a;
//
//
//	return 0;
//}

int main()
{
	int null = 0;
	int* p = NULL;

	return 0;
}