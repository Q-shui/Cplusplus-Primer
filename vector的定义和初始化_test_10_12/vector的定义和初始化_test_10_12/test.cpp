#include <iostream>
#include <vector>

using namespace std;

//int main()
//{
//	int n = 490;
//
//	for (int i = 1; i < 490; i++)
//	{
//		if (n % i == 0)
//			cout << i;
//	}
//	return 0;
//}

//int main()
//{
//	vector<int> a;
//
//	vector<string> v1 = { "a", "ab", "abc" };//�б��ʼ��
//
//	vector<int> ivec(10, -1);//����ָ��������Ԫ��;
//
//	//û��ָ������ֵ����ʼ����0������ֵ
//
//	return 0;
//}

int main()
{
	vector<int> v1(10);//v1��10��Ԫ��,ÿ������0��
	vector<int> v2{ 10 };//v2��1��Ԫ��10��
	vector<int> v3(10, 1);//v3��10��Ԫ�ض���1
	vector<int> v4{ 10, 1 };//v4������Ԫ��10,1;

	//��ʼ��ʱ����Ԫ����vector���Ͳ�ͬ
	
	//vector<string> v5("h")//"h"���ܴ���vector��������
	vector<string> v6{ "h" };//��һ��Ԫ��h
	vector<string> v7{ 10 };//��10��Ĭ��Ԫ��
	vector<string> v8{ 10, "h" };//��10��hԪ��;


	return 0;
}