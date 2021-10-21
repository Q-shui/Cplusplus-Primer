#include <iostream>

using namespace std;

int main()
{
	int ia[] = { 1, 2, 3, 4, 5 };
	int last = *(ia + 4);//得到最后一个值

	last = *ia + 4;//等价于ia[0] + 4;

	return 0;
}