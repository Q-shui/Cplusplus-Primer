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
//	auto ia2(ia);//ia2�Ǹ�ָ���������
//
//	return 0;
//}

//ָ�������

//int main()
//{
//	int a[10] = { 0 };
//
//	int* e = &a[10];//������vector�е�end;
//
//	for (int* i = a; i != e; i++)
//	{
//		cout << *i << endl;//�������������Ԫ��;
//	}
//
//	int* pbeg = begin(a);
//	int* pen = end(a);//begin��end ����
//
//
//	return 0;
//}

//ָ������

int main()
{
	constexpr size_t sz = 5;
	int arr[sz] = { 0 };
	int* p = arr;//��Ԫ�ص�ַ
	int* p2 = p + 4;//βԪ�ص�ַ

	int* p3 = p + sz;//���ܽ����ã���Ϊ��βԪ�ص���һ��λ��

	int* p4 = p + 10;//p4��ֵδ����

	return 0;
}