#include <iostream>
#include <vector>

using namespace std;

int main()
{
	string s;
	vector<string> str;
	int times = 1;
	string ps;

	while (cin >> s)
		str.push_back(s);

	auto beg = str.begin();

	while (beg != str.end())
	{
		int ptimes = 0;
		auto pbeg = beg;
		while (pbeg != str.end())
		{
			if (*pbeg == *beg)
				++ptimes;
			else
				break;
			++pbeg;
		}
			
		if (ptimes > times)
		{
			times = ptimes;
			ps = *beg;
		}

		++beg;
	}

	if (times != 1)
		cout << ps << times << endl;
	else
		cout << "none" << endl;

	return 0;
}