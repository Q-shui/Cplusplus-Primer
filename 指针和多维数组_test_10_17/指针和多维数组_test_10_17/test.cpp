#include <iostream>

using namespace std;

//int main()
//{
//	int ia[3][4];
//
//	int(*p)[4] = ia;//p�Ǹ�ָ�룬ָ���ĸ�Ԫ�ص����飬����������int
//
//	p = &ia[2];//pָ��ia��βԪ��
//
//	for (auto p = ia; p != ia + 3; p++)//auto�ؼ����Զ���pת��������ָ������;pָ��������Ǹ�����
//	{
//		for (auto q = *p; q != *p + 4; q++)
//			cout << *p << ' ';
//		cout << endl;
//	}
//
//	for (auto p = begin(ia); p != end(ia); p++)
//	{
//		for (auto q = begin(*p); q != end(*p); q++)//*p ָ����������
//			cout << *p << ' ';
//		cout << endl;
//	}
//
//	return 0;
//}

//int main()
//{
//	//���������ͱ���������ά����
//
//	using int_array = int[4];
//
//	typedef int int_array[4];
//
//
//
//	return 0;
//}

//��Χfor����ӡ��ά����Ԫ��

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

//�±�for����ӡ

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

//ָ��forѭ��

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

//��������

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

//ʹ��auto

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