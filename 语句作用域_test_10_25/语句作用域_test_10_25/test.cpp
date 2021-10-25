#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<int> s(10,1);

	vector<int>::iterator iter = s.begin();

	while (iter != s.end())
	{
		++iter;
	}

	while (bool status = 0)
	{
		if (!status)
		{
			break;
		}
	}

	return 0;
}