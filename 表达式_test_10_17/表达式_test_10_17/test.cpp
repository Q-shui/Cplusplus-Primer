#include <iostream>

using namespace std;

int main()
{
	int ia[] = { 1, 2, 3, 4, 5 };
	int last = *(ia + 4);//�õ����һ��ֵ

	last = *ia + 4;//�ȼ���ia[0] + 4;

	return 0;
}