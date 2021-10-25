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
//	//	lettergrade = score[(grade - 50) / 10];//if else语句;
//
//	//在进行嵌套
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
//	//要使用花括号
//
//	if (grade < 60)
//		lettergrade = score[0];
//	else
//		lettergrade = score[(grade - 50) / 10];//else的子语句只有下面一条
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

//悬空else

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
//		lettergrade += "-";//else是与他最近的if匹配;
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