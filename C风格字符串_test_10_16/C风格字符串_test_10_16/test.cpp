#define  _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using namespace std;

//int main()
//{
//	//char ca[] = { 'c', '+' ,'+' };
//	//cout << strlen(ca) << endl;//ca������'\0'���������Ի�������ֵ
//
//	string s1 = "A string example";
//	string s2 = "A different string";
//
//	if (s1 < s2)//��׼��string���Ϳ��ԱȽ�
//		cout << 1 << endl;
//
//	const char ca1[] = "ABC";
//	const char ca2[] = "abc";
//
//	//if (ca1 < ca2)//ʵ�����ǱȽ������޹ص�ַ
//
//	if (strcmp(ca1, ca2) < 0)//strcmp ��ȷ���0��С�ڷ��ظ��������ڷ�������;
//		cout << 1 << endl;
//
//	return 0;
//}

//int main()
//{
//	string s1 = "ABC";
//	string s2 = "abc";
//
//	if (s1 < s2)
//		cout << 1 << endl;
//	else
//		cout << 2 << endl;
//
//	return 0;
//}

//int main()
//{
//	const char ca1[] = "ABC";
//	const char ca2[] = "abc";
//
//	if (strcmp(ca1, ca2) < 0)
//		cout << 1 << endl;
//
//	return 0;
//}

int main()
{
	const char ca1[] = "ABC";
	const char ca2[] = "abc";

	char ca3[100] = "";

	strcpy(ca3, ca1);
	strcat(ca3, ca2);

	cout << ca3 << endl;

	return 0;
}