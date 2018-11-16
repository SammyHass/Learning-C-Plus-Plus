#include <iostream>
using namespace std;

int main ()
{
    int n = 10;
    while (n>0) {
        cout << n << ", ";
        --n;
    }

    cout << "Liftoff!" << endl;

    for (int i = 0; i < 101; i++) {
        if (i % 15 == 0) {
            cout << "FizzBuzz" << endl;
        } else if (i % 3 == 0) {
            cout << "Fizz" << endl;
        } else if (i % 5 == 0) {
            cout << "Buzz" << endl;
        } else {
            cout << i << endl;
        }
    }
}