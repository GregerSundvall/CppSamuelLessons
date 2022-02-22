#include <iostream>
#include "rectangle.h"

using namespace std;

Rectangle makeRect(int x, int y)
{
    Rectangle temp(x, y);
    return temp;
}

int main()
{
    Rectangle rect1(10,10);
    Rectangle rect2 = makeRect(3,4);

    return 0;
}

int xmain() {
    Rectangle* rect1 = new Rectangle(12,13);
    Rectangle rect2, rect3;
    rect2 = (*rect1);
    
    cout << "X:" << rect1->getX() << ", Y:" << rect1->getY() << endl;
    cout << boolalpha;
    cout << "is a Square? " << rect1->isSquare() << endl;
    rect1->setX(4);
    rect1->setY(5);
    cout << "is a Square? " << rect1->isSquare() << endl;
    cout << "X:" << rect1->getX() << ", Y:" << rect1->getY() << endl;
    cout << "X:" << rect2.getX() << ", Y:" << rect2.getY() << endl;
    delete rect1;
    rect1 = nullptr;

    cout << "Finished main" << endl;
    return 0;
}