#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "turkish");

	int e1 = 1, e2 = 1, e3;
	cout << e1 << endl << e2 << endl;
	for ( int i = 1; i < 20; i++)
	{
		e3 = e1 + e2;
		e1 = e2;
		e2 = e3;
		cout << e3 << endl;
	}
	
}
