#include <iostream>
#include <vector>

using namespace std;

//int main()
//{
//	int i = 0;
//	int arr[10];
//
//	cout << sizeof i << endl;//�õ�i�Ĵ�С
//	cout << sizeof arr << endl;//����Ĵ�С
//
//	return 0;
//}

//int main()
//{
//	int a[10];
//	int* p = a;
//
//	cout << sizeof(int) << endl;
//
//	cout << sizeof(a) / sizeof(*a) << endl;
//	cout << sizeof(p) / sizeof(*p) << endl;
//
//	return 0;
//}

//int main()
//{
//	int x = 1, y = 1;
//
//	cout << (sizeof x + y) << endl;
//
//	return 0;
//}

//���������

int main()
{
	vector<int> ivec;
	vector<int>::size_type cnt = ivec.size();

	for (vector<int>::size_type ix = 0; ix != ivec.size(); ++ix, --cnt)//++ix, --cntͬʱ����
		ivec[ix] = cnt;

	return 0;
}