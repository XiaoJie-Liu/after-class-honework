#include<iostream>
#include"math.h"
using namespace std;
class Date
{
private:
	int a, b, c;
public:
	void SetDate(int, int, int);
	void Display();
	int pdcl();
	int zc();
	int mj();
	int xz();
};
void Date::SetDate(int y, int m, int d)
{
	cout << "�������ߵ�ֵ��";
	cin >> y;
	cin >> m;
	cin >> d;
	a = y;
	b = m;
	c = d;
}
int Date::pdcl()
{
	int x, y;
	x = a + b;
	y = a - b;
	if (x < c || x < b || x < a)
	{
		cout << "���ܹ���������" << endl;
	}
	else
		cout << "�ܹ���������" << endl;
	return 1;
}
int Date::zc()
{
	int p;
	p = a + b + c;
	cout << p << endl;
	return p;
}
int Date::mj()
{
	float r, t;
	r = (a + b + c) / 2;
	t = sqrt(r*(r - a)*(r - b)*(r - c));
	cout << t << endl;
	return t;
}
int Date::xz()
{
	if ((a*a) + (b*b) < (c*c))
		cout << "���������" << endl;
	if ((a*a) + (b*b) == (c*c))
		cout << "ֱ��������" << endl;
	if ((a*a) + (b*b) > (c*c))
		cout << "�۽�������" << endl;
	return true;
}
void Date::Display()
{
	cout << a << " " << b << " " << c << endl;
}
int main()
{
	int y, m, d;
	Date bian;
	bian.SetDate(y, m, d);
	cout << "����Ϊ��";
	bian.Display();
	bian.pdcl();
	cout << "�ܳ�Ϊ��";
	bian.zc();
	cout << "���Ϊ��";
	bian.mj();
	cout << "�����ε���״Ϊ��";
	bian.xz();
	return 0;
}


