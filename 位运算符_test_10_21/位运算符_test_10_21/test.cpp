#include <iostream>

using namespace std;

//int main()
//{
//	unsigned int quiz = 0;
//
//	1UL << 27;//��1����27λ
//
//	quiz |= 1UL << 27;//������ֵ����quiz,��27λ��1;
//
//	cout << quiz << endl;
//
//	return 0;
//}

int main()
{
	unsigned long ul1 = 3, ul2 = 7;

	cout << (ul1 & ul2) << endl;
	cout << (ul1 | ul2) << endl;
	cout << (ul1 && ul2) << endl;
	cout << (ul1 || ul2) << endl;

	return 0;
}