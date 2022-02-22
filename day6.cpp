#include <iostream>

using namespace std;

class Point
{
    double x{1};
    double y{1};
public:
    Point() = default;

    Point (double x, double y) : x(x), y(y) {}

    Point operator+ (Point& right)
    {
        return Point(x + right.x, y + right.y);
    }

    double getX()
    {
        return x;
    }
    double getY()
    {
        return y;
    }


    int main()
    {
        Point p1(1, 3);
        Point p2(2, 5);
        Point p3;
        p3 = p1 + p2;


        return 0;
    }
};