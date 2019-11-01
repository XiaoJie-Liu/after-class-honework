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
	cout << "输入三边的值：";
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
		cout << "不能构成三角形" << endl;
	}
	else
		cout << "能构成三角形" << endl;
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
		cout << "锐角三角形" << endl;
	if ((a*a) + (b*b) == (c*c))
		cout << "直角三角形" << endl;
	if ((a*a) + (b*b) > (c*c))
		cout << "钝角三角形" << endl;
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
	cout << "三边为：";
	bian.Display();
	bian.pdcl();
	cout << "周长为：";
	bian.zc();
	cout << "面积为：";
	bian.mj();
	cout << "三角形的形状为：";
	bian.xz();
	return 0;
}


