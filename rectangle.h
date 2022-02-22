#pragma once
#include <iostream>

using namespace std;

class Rectangle {
private:
    int* x;
    int* y;
    
public:
    Rectangle();
    Rectangle(int x, int y);
    
    // Copy constructor
    Rectangle(Rectangle& source);
    
    ~Rectangle();
    
    Rectangle& operator = (Rectangle& right_operand)
    {
        delete x, y;
        *x = *right_operand.x;
        *y = *right_operand.y;
        return *this;
    }
    Rectangle& operator + (Rectangle& right_operand)
    {
        Rectangle result(*x, *y);
        *result.x += *right_operand.x;
        *result.y += *right_operand.y;
        return result;
    }
    // Accessor methods
    int getX() { return *x; }
    int getY() { return *y; }
    // Mutator methods
    void setX(int x) { 
        *this->x = x; 
    }
    void setY(int y) { *this->y = y; }
    Rectangle& add(Rectangle& other)
    {
        *x += *(other.x);
        *y += *(other.y);
        return *this;
    }
    // Facilitator methods
    int area() { return *x * *y; }
    int circumference() { return (*x * 2) + (*y * 2); }
    // Inspector methods
    bool isSquare() { return *x == *y; }


    Rectangle& operator + (Rectangle& left, Rectangle& right)
    {
        Rectangle result(*left.x + *right.x, *left.y + *right.y);
        return result;
    }
};