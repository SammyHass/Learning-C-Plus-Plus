#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main ()
{
    string input;
    int x;
    cout << "Input a number: ";
    getline(cin, input);
    stringstream(input) >> x;
    if (x > 100)
        cout << "x is over 100";
    else
        cout << "x is less than 100";
}