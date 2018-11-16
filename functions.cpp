#include <iostream>
#include <string>
using namespace std;

int add(int a, int b);
void print(string printable);

int main () {
    int a;
    int b;
    cout << "Please enter a value: ";
    cin >> a;
    cout << "Please enter another value: ";
    cin >> b;
    cout << "Adding those numbers gives " << add(a, b) << endl;
    print("Hello World!");
}


int add (int a, int b) {
    int r;
    r = a + b;
    return r; 
}

void print(string printable) {
    cout << printable << endl;
}

