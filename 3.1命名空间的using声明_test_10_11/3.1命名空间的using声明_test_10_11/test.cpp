#include <iostream>

using std::cin;
using std::cout;

int main()
{
	int a = 0;

	cin >> a;
	//cout << a;//需要从命名空间申请
	std::cout << a << std::endl;

	return 0;
}