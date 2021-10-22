#include <iostream>

using namespace std;

//int main()
//{
//	unsigned int quiz = 0;
//
//	1UL << 27;//把1左移27位
//
//	quiz |= 1UL << 27;//把他的值赋给quiz,第27位是1;
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