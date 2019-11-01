#include<iostream>
using namespace std;
float checkAgeScore(int age, float score)
{
	if ((age < 16) || (age > 25))
		throw age;
	if ((score < 1) || (score > 5))
		throw score;
	if (score == 5)
		cout << "该同学的百分制成绩为90~100" << endl;
	if (score == 4)
		cout << "该同学的百分制成绩为80~90" << endl;
	if (score == 3)
		cout << "该同学的百分之成绩为70~80" << endl;
	if (score == 2)
		cout << "该同学的百分之成绩为60~70" << endl;
	if (score == 1)
		cout << "该同学的百分之成绩为50~60" << endl;
	if (score == 0)
		cout << "该同学的百分之成绩为50以下" << endl;
	return score;
}
int main()
{
	float checkAgeScore(int age, float score);
	string a;
	int b;
	float c;
	cin >> a >> b >> c;
	try
	{
		checkAgeScore(b, c);
	}
	catch (int)
	{
		cout << "该同学的年龄为：" << b << endl;
	}
	catch (float)
	{
		cout << "该同学的分数为：" << c << endl;
	}
	cout << "该同学的年龄为：" << b << endl;
	cout << "该同学的成绩为：" << c << endl;
}
