#include <iostream>

//extern const int i = 42;//��const�����Ķ������extern���Ϳ����������ļ����õ�ʱ��ֻ������
//
//int main()
//{
//	const int bufsize = 512;//����const��������ʼ��
//	//bufsize = 512;//����ȷ��const��ֵ�����ڱ��ı�  ���ʽ�����ǿɱ��޸ĵ���ֵ
//	//const int i = get_size();//����ʱ�ֶ���ʼ��
//	const int j = 42;//����ʱ��ʼ��
//
//	//const�����ܱ�����ֵ��ʼ����Ҳ�ܳ�ʼ������ֵ
//	int a = 42;
//	const int b = a;
//	int c = b;
//
//
//	return 0;
//}

//int main()
//{
//	//const int buf;//���ʼֵ�趨��
//	int cnt = 0;
//	const int sz = cnt;
//	++cnt;
//	//++sz;//�����ǿ��޸ĵ���ֵ
//
//	return 0;
//}


//const������

//int main()
//{
//	const int i = 1024;
//	const int& r1 = i;
//
//	//r1 = 42;//r1�ǶԳ���������
//	//int& r2 = i;//i�ǳ���
//
//
//	return 0;
//}

//int main()
//{
//	const int i = 4.2;//Ҳ���ԣ������Ǳ��ʽ��������ֵ��ֻҪ��ת���ɸ����ͼ���
//
//	int j = 42;
//	const int& r1 = j;//����const int& ����int����
//
//	//int& r2 = r1;//����������ͨ���ð󶨳�������
//
//
//
//	return 0;
//}

//int main()
//{
//	int i = 42;
//	int& r1 = i;
//	const int& r2 = i;
//
//	r1 = 0;
//
//	std::cout << r2 << std::endl;//��������ֵ���Ա��޸�
//
//	return 0;
//}


//ָ���const


//int main()
//{
//	const double i = 3.14;
//	//double* pi = &i;//ptr�Ǹ���ָͨ��
//	const double* cptr = &i;
//	//const int* cpi = &i;//ָ������ͱ���Ҫ��ͬ
//
//	int j = 3;
//	const int* cpj = &j;
//	int* pj = &j;
//	*pj = 4;
//
//	std::cout << *cpj << *pj << std::endl;//����ͨ������ֵ���ı� 
//	
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int* const cpa = &a;//cpa��ֵ���ܱ��ı�
//
//	const int b = 1;
//	const int* const cpb = &b;//ָ�����ĳ���ָ��
//
//	*cpa = 3;
//
//	std::cout << a << std::endl;//����ͨ������ָ�����ı����ֵ
//
//	return 0;
//}

//int main()
//{
//	//int i = -1, & r = 0;
//
//	int i = 0;
//	const int j = 1;
//	i = j;
//
//	int* pi = &i;
//	//int* const cpj = &j;
//
//
//	return 0;
//}


//����const


//int main()
//{
//	int i = 0;
//	int* const cpi = &i;//����const
//
//	const int j = 1;
//	const int* cpj = &i;//�ײ�const
//
//	const int k = 2;
//	const int* const cpk = &k;//���Ƕ���const��Ҳ�ǵײ�const
//
//	return 0;
//}

//int main()
//{
//	const int i = 1;
//	const int v2 = 0;
//	int v1 = v2;
//	int* p1 = &v1, & r1 = v1;
//	const int* p2 = &v2, *const p3 = &i, & r2 = v2;
//
//	r1 = v2;
//	//p1 = p2;
//	p2 = p1;
//	//p1 = p3;
//	p2 = p3;
//
//
//	return 0;
//}

//constexpr �� �������ʽ


//const int a = 1;
//int main()
//{
//	constexpr int i = 3;
//	const int j = i + 1;
//
//	const int* p = NULL;//ָ����
//	constexpr int* q = NULL;//����ָ��
//
//	constexpr const int* pj = &a;
//	constexpr const int* const px = &a;
//
//
//	return 0;
//}

int main()
{
	int null = 0;
	int* p = NULL;

	return 0;
}