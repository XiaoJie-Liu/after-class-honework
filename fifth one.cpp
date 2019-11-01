#include <iostream>
using namespace std;
#include<stdlib.h>
int add(int a, int b);
int main()
{
	int x, y, sum;
	cout << "Please input x and y:" << endl;
	cin >> x >> y;
	sum = add(x, y);
	cout << x << "+" << y << "=" << sum << endl;
	getchar();
	getchar();
	return 0;
	system("pause");
}
int add(int a, int b)
{
	a += b;
	return a;
}