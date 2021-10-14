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
//	vector<string> v1 = { "a", "ab", "abc" };//列表初始化
//
//	vector<int> ivec(10, -1);//创建指定数量的元素;
//
//	//没有指定具体值则会初始化成0或其他值
//
//	return 0;
//}

int main()
{
	vector<int> v1(10);//v1有10个元素,每个都是0；
	vector<int> v2{ 10 };//v2有1个元素10；
	vector<int> v3(10, 1);//v3有10个元素都是1
	vector<int> v4{ 10, 1 };//v4有两个元素10,1;

	//初始化时所给元素与vector类型不同
	
	//vector<string> v5("h")//"h"不能创建vector对象数量
	vector<string> v6{ "h" };//有一个元素h
	vector<string> v7{ 10 };//有10个默认元素
	vector<string> v8{ 10, "h" };//有10个h元素;


	return 0;
}