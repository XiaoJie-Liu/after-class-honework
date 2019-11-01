#include <iostream>
using namespace std;
#include<stdlib.h>
int main()
{
	int x;
	double s, c;
	cout << "Please input x(半径):" << endl;
	cin >> x;
	c = 2 * 3.1415926*x;
	s = 3.1415926*x*x;
	cout << "周长c=" << c << " 面积s=" << s << endl;
	getchar();
	getchar();
	return 0;
	system("pause");
}