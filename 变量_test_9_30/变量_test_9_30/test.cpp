#include <iostream>

//int reused = 42;
//
//int main()
//{
//	int unique = 1;
//	std::cout << reused << " " << unique << std::endl;
//
//	int reused = 1;
//	std::cout << reused << " " << unique << std::endl;
//
//	std::cout << ::reused << " " << unique << std::endl;//ʹ��::������ԭ�������������
//
//	return 0;
//}

//int i = 42;
//
//int main()
//{
//	int i = 100;
//	int j = i;//��ʱi������������Ըı�
//
//	std::cout << j << std::endl;
//
//	return 0;
//}

int main()
{
	int i = 100, sum = 0;

	for (int i = 0; i != 10; i++)
		sum += i;

	std::cout << i << " " << sum << std::endl;

	return 0;
}