#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
    public:
        Rectangle (int a, int b) {
            width = a;
            height = b;
        }
        double area () {
            return width*height;
        }
        double perimeter () {
            return 2*width+2*height;
        }
};

int main () {
    Rectangle rect (5, 5);
    cout << rect.perimeter() << endl << rect.area();
    
    
    return 0;
}