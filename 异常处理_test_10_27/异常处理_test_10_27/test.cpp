#include <iostream>
#include <stdexcept>

using namespace std;

//int main()
//{
//	int item1, item2;
//
//	cin >> item1 >> item2;
//
//	//if (item1 == item2)
//	//	cout << item1 + item2 << endl;
//
//	//else
//	//{
//	//	cerr << "data must refer to same" << endl;
//	//	return -1;
//	//}
//
//
//	if (item1 != item2)
//		throw runtime_error("Data must refer to same");
//
//	cout << item1 + item2 << endl;
//
//	return 0;
//}


//int main()
//{
//	int item1, item2;
//
//	while (cin >> item1 >> item2)
//	{
//		try
//		{
//			if (item1 != item2)
//				throw runtime_error("Data must refer to same");
//
//			cout << item1 + item2 << endl;
//		}
//		catch (runtime_error err)
//		{
//			cout << err.what() << "\ntry again ? y/n" << endl;
//			char c;
//			cin >> c;
//
//			if (!cin || c == 'n')
//				break;
//
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int a, b;
//	
//	cin >> a >> b;
//
//	cout << a / b << endl;
//
//	return 0;
//}

//int main()
//{
//	int a, b;
//
//	cin >> a >> b;
//
//	if (b == 0)
//		throw runtime_error("b is not zero");
//
//	cout << a / b << endl;
//
//	return 0;
//}

int main()
{
	int a, b;

	while (cin >> a >> b)
	{
		try
		{
			if (b == 0)
				throw runtime_error("b is not zero");

			cout << a / b << endl;
		}
		catch (runtime_error err)
		{
			cout << err.what() << "\ntry again ? y/n" << endl;

			char c;
			cin >> c;

			if (!cin || c == 'n')
				break;
		}
	}

	return 0;
}