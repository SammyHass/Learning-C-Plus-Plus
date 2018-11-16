//
//  main.cpp
//  HelloWorld
//
//  Created by Sammy Hass on 16/09/2018.
//  Copyright © 2018 Sammy Hass. All rights reserved.
//

#include <iostream>
#include <string>
#include "Header_Files/Rectangle.h"
using namespace std;
int AddTwo(int i) {
    return i + 2;
};




int main(int argc, const char * argv[]) {
    unsigned int u (0);
    u = static_cast<unsigned>(-2); // Doesn't make sense, unsigned can't hold negatives
    cout << u << endl;
    
    double d (2.7);
    d = 2;
    cout << d << endl;
    
    bool flag (true);
    cout << flag << endl;
    
    int i (4);
    const int j (2);
    i = 41;
    //j = 31 cannot reassign const
    cout << j << endl << i << endl;

    cout << "Next" << endl;
    
    Rectangle rect;
    
    
}


