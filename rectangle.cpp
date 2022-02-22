#include "rectangle.h"
#include "rectangle.h"

Rectangle::Rectangle() {
    x = new int(1);
    y = new int(1);
    cout << "In default constructor" << endl;
}
Rectangle::Rectangle(int x, int y) : x(new int(x)), y(new int(y)) {
    cout << "In parameterized constructor" << endl;
}
// Copy constructor
Rectangle::Rectangle(Rectangle& source) {
    cout << "In copy constructor" << endl;
    x = new int(*source.x);
    y = new int(*source.y);
}
Rectangle::~Rectangle() {
    cout << "In destructor" << endl;
    delete x;
    delete y;
}


// Methods

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
int Rectangle::getX() { return *x; }
int Rectangle::getY() { return *y; }
// Mutator methods
void setX(int x) { 
    *this->x = x; 
}
void setY(int y) { *this->y = y; }
Rectangle::Rectangle& add(Rectangle& other)
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


Rectangle::Rectangle& operator + (Rectangle& left, Rectangle& right)
{
    Rectangle result(*left.x + *right.x, *left.y + *right.y);
    return result;
}



