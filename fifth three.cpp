#include <iostream>
using namespace std;
#include <stdlib.h>
int main()
{
	int *ptr,i,m=0,n=0;
	ptr = new int[20];
	for (i = 0; i < 20; i++)
	{
		cin >> ptr[i];
		if (ptr[i] > 0)
			n++;
		if (ptr[i] < 0)
			m++;
	}
	cout << "负数有" << m << "个" << endl;
	cout << "正数有" << n << "个" << endl;
	delete[]ptr;
	getchar();
	getchar();
	system("pause");
}