#include <iostream>
#include <vector>

using namespace std;

//int main()
//{
//	int ia[] = { 0, 2, 4, 6, 8 };
//	int last = *(ia + 4);//last的值是8
//
//	int i = ia[2];//ia得到数组首元素地址，ia[2]表示得到ia+2的元素;
//
//	int* p = ia;
//	i = *(p + 2);//等价于 i = ia[2];
//
//	int* p = &ia[2];
//
//	int j = p[1];//等价于int j = *(p + 1);
//	//也可以理解为p是一个新的数组，数组首元素是ia的第3个元素,p[1],是p数组下标为1的位置；
//
//	int k = p[-2];//相当于ia[0]的位置;
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
//	cout << *p1 << endl;//等价于p1 = p2;
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