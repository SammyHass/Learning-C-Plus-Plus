#include <iostream>
#include <string>
using namespace std;

int main()
{
	int num = 3;
	int &refNum = num;

	cout << "num contains " << num << endl;
	cout << "refNum contains " << refNum << endl;


}