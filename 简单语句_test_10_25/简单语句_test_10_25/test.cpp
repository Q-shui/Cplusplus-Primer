#include <iostream>

using namespace std;

//int main()
//{
//	int val = 0;
//	int sum = 0;
//
//	val + 5;//val��ֵ��û�б��ı�
//
//	;//�����
//
//	string s;
//	string sought = "s";
//
//	while (cin >> s && s != sought)
//		;//whileѭ�����ɾ�������;
//
//	int v1 = 0, v2 = 0;
//
//	val = v1 + v2;;//�ڶ����ֺ���һ�������;
//
//	while (val != 5);
//		++val;//�����䲢��������ѭ����;
//	
//	while (val <= 10 ? val++ : 0)
//		sum += val;
//
//	return 0;
//}

int main()
{
	int sum = 0;
	int val = 1;

	while (val <= 10 ? sum += val : 0)
		++val;

	cout << sum << endl;

	return 0;
}