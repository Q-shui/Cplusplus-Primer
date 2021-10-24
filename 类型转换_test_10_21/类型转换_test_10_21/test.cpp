#include <iostream>

using namespace std;

//int main()
//{
//	int val = 3.41 + 3;//结果是6;
//
//	double i = static_cast<double>(val);
//
//	i += 0.1;
//
//	cout << i << endl;
//	
//	const char* pc;
//
//	char* p = const_cast<char*>(pc);
//
//	return 0;
//}

//int main()
//{
//	int i;
//	double d;
//	const string* ps;
//	char* pc;
//	void* pv;
//
//	pv = reinterpret_cast<void*>(const_cast<string*>(ps));//先去const，再类型转换
//	i = static_cast<int>(*pc);
//	pv = reinterpret_cast<void*>(&d);
//	pc = reinterpret_cast<char*>(pv);
//
//	return 0;
//}

int main()
{
	int j = 3, i = 2;

	double slope = static_cast<double>(j / i);

	cout << slope << endl;

	return 0;
}