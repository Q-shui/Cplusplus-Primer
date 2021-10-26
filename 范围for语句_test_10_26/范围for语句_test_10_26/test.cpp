#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v(10, 1);

	for (auto& i : v)//对于v中的每个元素
		i *= 2;

	for (auto beg = v.begin(), end = v.end(); beg != end; beg++)
		;

	return 0;
}