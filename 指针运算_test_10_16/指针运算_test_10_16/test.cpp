#include <iostream>
#include <vector>

using namespace std;

//int main()
//{
//	int ia[] = { 0, 2, 4, 6, 8 };
//	int last = *(ia + 4);//last��ֵ��8
//
//	int i = ia[2];//ia�õ�������Ԫ�ص�ַ��ia[2]��ʾ�õ�ia+2��Ԫ��;
//
//	int* p = ia;
//	i = *(p + 2);//�ȼ��� i = ia[2];
//
//	int* p = &ia[2];
//
//	int j = p[1];//�ȼ���int j = *(p + 1);
//	//Ҳ�������Ϊp��һ���µ����飬������Ԫ����ia�ĵ�3��Ԫ��,p[1],��p�����±�Ϊ1��λ�ã�
//
//	int k = p[-2];//�൱��ia[0]��λ��;
//
//
//
//	return 0;
//}

//int main()
//{
//	int ia[] = { 0, 2, 4, 6, 8 };
//	int* p1 = &ia[2];
//	int* p2 = &ia[3];
//
//	p1 += p2 - p1;
//
//	cout << *p1 << endl;//�ȼ���p1 = p2;
//
//	return 0;
//}

//int main()
//{
//	int a[] = { 10, 1, 2, 3};
//
//	for (int* p = a; p != end(a); p++)
//		*p = 0;
//
//	for (int i = 0; i < size(a); i++)
//		cout << a[i] << endl;
//
//	return 0;
//}

//int main()
//{
//	int ia1[] = { 0, 1, 2, 3, 3, 5, 6};
//	int ia2[] = { 0, 1, 2, 3, 4, 5 };
//
//	for (int i = 0; i < size(ia1) || i < size(ia2); i++)
//	{
//		if (ia1[i] != ia2[i])
//		{
//			cout << "not equal" << endl;
//			break;
//		}
//
//
//	}
//		
//	if (size(ia1) != size(ia2))
//		cout << "not equal" << endl;
//	else
//		cout << "euqal" << endl;
//
//	return 0;
//}

int main()
{
	vector<int> v1(10, 1);
	vector<int> v2(10, 2);

	if (v1 == v2)
		cout << "equal" << endl;
	else
		cout << "not equal" << endl;

	return 0;
}