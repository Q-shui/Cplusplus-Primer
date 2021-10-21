#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<string> vs;
	vector<int> vi;

	for (const auto& s : vs)
	{
		cout << s;
		if (s.empty() || s[s.size() - 1] == '.')
			cout << endl;
		else
			cout << " ";
	 }

	if (!vi.empty())
	{
		;
	}

	return 0;
}