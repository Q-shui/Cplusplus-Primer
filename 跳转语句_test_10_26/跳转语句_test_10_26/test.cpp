#include <iostream>

using namespace std;

//break

//int main()
//{
//	string buf;
//
//	while (cin >> buf && !buf.empty())
//	{
//		switch (buf[0])
//		{
//		case '-':
//			//������һ���հ�
//			for (auto it = buf.begin() + 1; it != buf.end(); ++it)
//				if (*it == ' ')
//					break;//������ǰforѭ��
//			break;//����switch���
//
//		case '+':
//			break;
//		}
//	}//������while
//
//	return 0;
//}


//int main()
//{
//	string str1, str2;
//
//	while (cin >> str2)
//	{
//		if (str1 == str2)
//		{
//			cout << str2 << endl;
//			return 0;
//		}
//		str1 = str2;
//	}
//		
//	cout << "none" << endl;
//
//	return 0;
//}

//continue

//int main()
//{
//	string str1, str2;
//
//	while (cin >> str2)
//	{
//		if (str1 == str2)
//		{
//			if (!isupper(str2[0]))//�����Դ�д��ĸ��ͷ
//				continue;
//			cout << str2 << endl;
//			return 0;
//		}
//		str1 = str2;
//	}
//		
//	cout << "none" << endl;
//
//	return 0;
//}

//goto���

//int main()
//{
//	int sz;
//	begin:
//	while (cin >> sz)
//		if (sz < 0)
//			goto begin;
//
//	return 0;
//}

int main()
{
	int sz;

	while (cin >> sz)
		if (sz < 0)
			continue;

	return 0;
}