#include<iostream>
using namespace std;
float checkAgeScore(int age, float score)
{
	if ((age < 16) || (age > 25))
		throw age;
	if ((score < 1) || (score > 5))
		throw score;
	if (score == 5)
		cout << "��ͬѧ�İٷ��Ƴɼ�Ϊ90~100" << endl;
	if (score == 4)
		cout << "��ͬѧ�İٷ��Ƴɼ�Ϊ80~90" << endl;
	if (score == 3)
		cout << "��ͬѧ�İٷ�֮�ɼ�Ϊ70~80" << endl;
	if (score == 2)
		cout << "��ͬѧ�İٷ�֮�ɼ�Ϊ60~70" << endl;
	if (score == 1)
		cout << "��ͬѧ�İٷ�֮�ɼ�Ϊ50~60" << endl;
	if (score == 0)
		cout << "��ͬѧ�İٷ�֮�ɼ�Ϊ50����" << endl;
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
		cout << "��ͬѧ������Ϊ��" << b << endl;
	}
	catch (float)
	{
		cout << "��ͬѧ�ķ���Ϊ��" << c << endl;
	}
	cout << "��ͬѧ������Ϊ��" << b << endl;
	cout << "��ͬѧ�ĳɼ�Ϊ��" << c << endl;
}
