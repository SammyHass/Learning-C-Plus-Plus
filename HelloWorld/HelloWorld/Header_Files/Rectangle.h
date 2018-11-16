//
//  Rectangle.h
//  HelloWorld
//
//  Created by Sammy Hass on 17/09/2018.
//  Copyright © 2018 Sammy Hass. All rights reserved.
//

#ifndef Rectangle_h
#define Rectangle_h

class Rectangle
{
public:
    int get_area() {
        return _width * _height;
    }
    int get_width() { return _width; }
    int get_height() { return _height; }
    void resize(int new_width, int new_height) {
        _width = new_width;
        _height = new_height;
    };
    Rectangle() {
        _width = 0;
        _height = 0;
    };
    Rectangle(int intitial_width, int initial_height) {
        _width = intitial_width;
        _height = initial_height;
    };
private:
    int _width;
    int _height;
};

#endif /* Rectangle_h */
