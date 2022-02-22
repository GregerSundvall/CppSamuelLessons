#include  <iostream>

using namespace std;


class base
{
    int private_int{1};
    
protected:
    int protected_int{1};
    
public:
    base()
    {
        cout << "base constructor" << endl;
    }
    void message()
    {
        cout << "Hello from base class" << endl;
    }

    //virtual void pureVirtual() = 0; // Makes class abstract
};



class derived : public base
{
public:
    derived()
    {
        cout << "derived constructor" << endl;
    }
    void message()
    {
        base::message();
        cout << "Hello from base class" << endl;
    }

};



int main()
{
    
    derived d;
    d.message();

    base* basePointer = new derived;
    basePointer->message(); // runs message from base class
    
}