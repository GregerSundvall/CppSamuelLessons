#include <iostream>

#define EASY 1 // Not a variable. Every reference to this will be replaced with value before compile.

enum class difficulty
{
    easy = 5,
    simple = easy,
    medium,
    hard,
    nightmare
};

typedef unsigned long long int bigint; // old school?
using large_int = unsigned long long int; // new school?
typedef float speed;

struct Student
{
    char firstName[50];  // all members are PUBLIC by default!
    char lastName[50];
    int age;    
};

class Rectangle
{
    // int x{ 1 }; // with default
    int x {1};
    int y {1};
    int z {1};

public:
    //Constructors (optional)
    Rectangle() = default;
    Rectangle(int x) : Rectangle(x, 1, 1) {} //Constructor delegation, uses the one below
    Rectangle(int x, int y, int z) : x(x), y(y), z(z) { }
    // Rectangle(int x, int y, int z)
    // {
    //     this->x = x;
    //     this->y = y;
    //     this->z = z;
    // }
    //Destructor
    ~Rectangle() = default;
    //Accessor methods
    int getX() { return x; }
    int getY();
    int getZ();
    // Mutator methods
    void setX(int x) { this->x = x; }
    //Facilitator methods
    int area() { return x * y; }
    // Inspector methods
    bool isSquare() { return x == y; }
};



int Rectangle::getY()
{
    return y;
}
inline int Rectangle::getZ()
{
    return z;
}




int main()
{
    bigint myLongNumber = 456;
    large_int myOtherLongNumber = 456;
    speed forward = 1.0f;

    Student s1;

    Rectangle rect1(1);
    auto* rect2 = new Rectangle(4, 5, 6);
    bool square = rect2->isSquare();
    rect2->setX(4);
    rect1.setX(4);
    
    

    return 0;
}


