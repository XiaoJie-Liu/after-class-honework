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
	cout << "������" << m << "��" << endl;
	cout << "������" << n << "��" << endl;
	delete[]ptr;
	getchar();
	getchar();
	system("pause");
}