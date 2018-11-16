#include <iostream>
#include <string>
using namespace std;

int main()
{
	int num = 3;
	int* pNum = &num;

	cout << pNum << endl;

	cout << num << endl;

	*pNum = 24;

	cout << *pNum << endl;
	cout << num << endl;
}