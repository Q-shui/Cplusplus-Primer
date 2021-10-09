// 1.4.1 while 语句

//#include <iostream>
//
//int main()
//{
//	int sum = 0, val = 50;
//
//	while (val <= 100)
//	{
//		sum += val;
//		val++;
//	}
//
//	std::cout << "sum is " << sum << std::endl;
//
//	return 0;
//}

//#include <iostream>
//
//int main()
//{
//	int val = 10;
//
//	while (val > 0)
//	{
//		std::cout << val << std::endl;
//		val--;
//	}
//
//	return 0;
//}

//#include <iostream>
//
//int main()
//{
//	int val1 = 0, val2 = 0;
//
//	std::cin >> val1 >> val2;
//
//	while (val1 + 1 < val2)
//	{
//		++val1;
//
//		std::cout << val1 << std::endl;
//	}
//
//	while (val1 > val2 + 1)
//	{
//		++val2;
//		std::cout << val2 << std::endl;
//	}
//
//
//	return 0;
//}

// 1.4.2 for 语句

//#include <iostream>
//
//int main()
//{
//	int sum = 0;
//	
//	for (int val = -100; val <= 100; val++)
//		sum += val;
//
//	std::cout << sum << std::endl;
//
//	return 0;
//}

//#include <iostream>
//
//int main()
//{
//	int sum = 0;
//
//	for (int val = 50; val <= 100; val++)
//		sum += val;
//
//	std::cout << sum << std::endl;
//
//	return 0;
//}

//#include <iostream>
//
//int main()
//{
//	for (int val = 10; val > 0; val--)
//		std::cout << val << " ";//不换行， 不需要std::endl
//
//	return 0;
//}

//读取不定量输入的数据

//#include <iostream>
//
//int main()
//{
//	int val = 0;
//
//	std::cin >> val;
//	std::cin >> val;//数值刷新
//
//	std::cout << val << std::endl;
//
//	return 0;
//}

//#include <iostream>
//
//int main()
//{
//	int val = 0, sum = 0;
//	while (std::cin >> val)
//		sum += val;
//
//	std::cout << sum << std::endl;//ctrl + z 在按enter 用来结束
//
//	return 0;
//}

//1.4.4 if 语句

//#include <iostream>
//
//int main()
//{
//	int currval = 0, val = 0;
//
//	if (std::cin >> currval)
//	{
//		int cnt = 1;
//		while (std::cin >> val)
//		{
//			if (currval == val)
//				++cnt;
//			else
//			{
//				std::cout << currval << " occurs " << cnt << " times " << std::endl;
//				currval = val;
//				cnt = 1;
//			}
//		}
//		std::cout << currval << " occurs " << cnt << " times " << std::endl;
//
//	}
//	return 0;
//}

//#include <iostream>
//
//int main()
//{
//	int val1 = 0, val2 = 0;
//
//	std::cin >> val1 >> val2;
//
//	int minner = val1;
//	int maxer = val2;
//
//	if (minner > maxer)
//	{
//		minner = val2;
//		maxer = val1;
//	}
//
//	while (minner + 1 < maxer)
//	{
//		++minner;
//		std::cout << minner;
//	}
//
//	return 0;
//}