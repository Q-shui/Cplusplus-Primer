#include <iostream>
#include <vector>

using namespace std;

//int main()
//{
//	const vector<string> score = { "F", "D", "C", "B", "A", "A++" };
//	int grade;
//	string lettergrade;
//
//	//if (grade < 60)
//	//	lettergrade = score[0];
//	//else
//	//	lettergrade = score[(grade - 50) / 10];//if else���;
//
//	//�ڽ���Ƕ��
//
//	//if (grade < 60)
//	//	lettergrade = score[0];
//	//else
//	//{
//	//	lettergrade = score[(grade - 50) / 10];
//
//	//	if (grade != 100)
//	//	{
//	//		if (grade % 10 > 7)
//	//			lettergrade += "+";
//	//		else if (grade % 10 < 3)
//	//			lettergrade += "-";
//	//	}
//	//}
//
//	//Ҫʹ�û�����
//
//	if (grade < 60)
//		lettergrade = score[0];
//	else
//		lettergrade = score[(grade - 50) / 10];//else�������ֻ������һ��
//
//		if (grade != 100)
//		{
//			if (grade % 10 > 7)
//				lettergrade += "+";
//			else if (grade % 10 < 3)
//				lettergrade += "-";
//		}
//		
//
//	return 0;
//}

//����else

//int main()
//{
//	int grade;
//	string lettergrade;
//
//	if (grade % 10 >= 3)
//		if (grade % 10 > 7)
//			lettergrade += "+";
//
//	else
//		lettergrade += "-";//else�����������ifƥ��;
//
//	return 0;
//}

//int main()
//{
//	vector<string> score = { "F", "D", "C", "B", "A", "A++" };
//	int grade;
//	string lettergrade;
//
//	grade < 60 ? (lettergrade = score[0]) :
//		(grade % 10 > 7 ? lettergrade = score[(grade - 50) / 10] + "+" :
//			(grade % 10 < 3 ? lettergrade = score[(grade - 50) / 10] + "-" :
//				lettergrade = score[(grade - 50) / 10]));
//
//	return 0;
//}

int main()
{
	int val1 = 1;
	int val2 = 2;

	if (val1 != val2)
		val1 = val2;

	else val1 = val2 = 0;

	return 0;
}