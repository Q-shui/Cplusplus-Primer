#include <iostream>

//���ͱ���   �ض���

////typedef int I;//IΪint���͵ñ���
////typedef I base, * p;//pΪint* �ñ���
//using I = int;
//
//int main()
//{
//	I a = 1;
//
//	return 0;
//}


//auto����˵����


//int main()
//{
//	int i = 0, & r = i;
//	auto a = r;
//	const int ci = 1, & cr = ci;
//	auto b = ci;
//	auto c = cr;
//	auto d = &i;
//	auto e = &ci;
//	const auto f = ci;
//	auto& g = ci;
//
//	a = 42;
//	b = 42;
//	c = 42;
//	/*d = 42;
//	e = 42;
//	g = 42;*/
//
//	return 0;
//}

//int main()
//{
//	const int i = 0;
//	auto j = i;
//	const auto& k = i;
//	auto* p = &i;
//	const auto j2 = i, & k2 = i;
//
//	j = 42;
//	k = 42;
//	*p = 42;
//	j2 = 42;
//	k2 = 42;
//
//	return 0;
//}


//decltype ����ָʾ��

//int main()
//{
//	const int i = 0, & ci = i;
//
//	decltype(i) x = 0;
//
//	int a = 1;
//	int* p = &a;
//
//	decltype(*p) c = a;//*p�������Ǹ�����
//
//	decltype((a)) d = a;//(a)Ҳ�Ǹ�����
//
//
//	return 0;
//}

//int main()
//{
//	int a = 3, b = 4;
//	decltype(a) c = a;
//	decltype((b)) d = a;
//
//	++c;
//	++d;
//
//	std::cout << a << b << c << d << std::endl;
//
//	return 0;
//}

int main()
{
	int a = 3, b = 4;
	decltype(a) c = a;
	decltype(a = b) d = a;

	++d;

	std::cout << a << b << c << d << std::endl;

	return 0;
}