#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

//int main()
//{
//	string s("hello");//c����ַ�����ʼ��string����
//
//	//char* str = s;//������string�����ʼ��c����ַ���
//
//	const char* str = s.c_str();//c_str() ��string����ת����c�����ַ�����ʽ
//	//��s�ĸ�ʽ��û�иı�
//
//	int int_arr[] = { 1, 2, 3 };
//
//	vector<int> iva(begin(int_arr), end(int_arr));//�������ʼ��vector����
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