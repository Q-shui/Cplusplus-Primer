#include <string>
#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

//��string����Ķ���ͳ�ʼ��

//int main()
//{
//	string s1;
//	string s2(s1);
//	string s3(s1);//s3����s1������
//
//	//string s3("value");
//	s3 = "value";//������ʼ��
//	string s4(10, 'c');//ֱ�ӳ�ʼ��
//
//	string s8 = string(10, 'c');//��ֱ�ӳ�ʼ�����ٿ���
//
//	string tmp(10, 'c');
//	string s9 = tmp;//ͬ�ϵȼ�
//
//	return 0;
//}

//string�����ϵĲ���

//int main()
//{
//	string s;
//
//	cin >> s;//���Զ����Կ�ͷ�Ŀո�
//	cout << s << endl;
//
//	return 0;
//}

//int main()
//{
//	string s;
//	while (cin >> s)
//		cout << s << endl;//�����ļ�������ֹͣ ��ctrl + z;
//
//	return 0;
//}

//int main()
//{
//	string s;
//	/*while (getline(cin, s))
//		cout << s << endl;*/
//	/*while (cin >> s)
//		cout << s << endl;*/
//
//	//while (getline(cin, s))
//	//{
//	//	if (!s.empty())
//	//		cout << s << endl;
//	//}//����ǿ��ַ�
//
//	//while (getline(cin, s))
//	//{
//	//	if (s.size() > 70)
//	//		cout << s << endl;
//	//}//������ȳ���70���ַ�
//
//
//
//	return 0;
//}

//int main()
//{
//	string s;
//	//getline(cin, s);//���롮		a b'�������	a b��
//	cin >> s;//���롮	a b�������a
//	cout << s << endl;
//
//	return 0;
//}

//int main()
//{
//	string s1, s2;
//	cin >> s1 >> s2;
//
//	if (s1 == s2)
//		cout << "s1 is equal to s2." << endl;
//	else if (s1 > s2)
//		cout << s1 << endl;
//	else
//		cout << s2 << endl;
//
//	return 0;
//}

//int main()
//{
//	string s, s1;
//
//	//while (getline(cin, s1))
//	//	s += s1;//�޿ո�
//
//	while (getline(cin, s1))
//	{
//		s1 += ' ';
//		s += s1;
//	}
//
//
//	cout << s << endl;
//}

//int main()
//{
//	string str = "something";
//	string s = "hello world!!!.";
//	decltype(s.size()) punct_cnt = 0;//punct_cnt��������string::size_type
//
//	for (auto c : str)
//		cout << c << endl;
//
//	for (auto b : s)
//		if (ispunct(b))
//			++punct_cnt;
//
//	cout << punct_cnt << endl;
//
//
//
//	return 0;
//}

//int main()
//{
//	string str = "something";
//
//	for (auto &c : str)//ѭ������ı����c��ֵ����Ҫ�ı�str��ֵ��Ҫʹ������
//		c = toupper(c);
//
//	cout << str << endl;
//
//	return 0;
//}

