#include <iostream>
#include <vector>

using namespace std;

//int main()
//{
//	string s("some thing");
//
//	if (s.begin() != s.end()) 
//	{
//		auto it = s.begin();
//
//		*it = toupper(*it);
//	}
//	
//	cout << s << endl;
//
//	return 0;
//}

//int main()
//{
//	string s("some thing");
//
//	for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
//		*it = toupper(*it);
//
//	cout << s << endl;
//
//	return 0;
//}

//begin end ������������

//int main()
//{
//	vector<int> v;
//	const vector<int> cv;
//
//	auto it1 = v.begin();//it1�������� vector<int>::iterator;
//	auto it2 = cv.begin();//it2�������� vector<int>::const_iterator;
//
//	//����ͨ��ר�ŵĺ����õ� vector<int>::const_iterator
//
//	auto it3 = v.cbegin();
//
//	return 0;
//}

//int main()
//{
//	vector<string> vs;
//
//	auto it = vs.begin();
//
//	(*it).empty();//��������ʹ�õ�������������ͳ�Ա
//
//	it->empty();//��ͷ��������ָ�룬�Ҳ��Ƕ����Ա
//	//���ߵȼ�
//
//
//
//	return 0;
//}

//int main()
//{
//	vector<string> text;
//
//	for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
//	{
//		for (int i = 0; i < it->size(); i++)
//			if (!isspace((*it)[i]))
//				(*it)[i] = toupper((*it)[i]);
//	}
//
//	for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
//		cout << *it << endl;
//
//	return 0;
//}

int main()
{
	vector<int> a(10, 1);

	for (auto it = a.begin(); it != a.end(); ++it)
	{
		*it *= 2;
		cout << *it << endl;
	}
		


	return 0;
}