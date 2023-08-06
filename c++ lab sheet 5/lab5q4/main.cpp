// 4. Write a program to show the use of virtual base class.
#include <iostream>
using namespace std;

class Base
{
public:
    virtual void show()
    {
        cout << "Base class" << endl;
    }
};

class Derived : virtual public Base
{
public:
    void show()
    {
        cout << "Derived class" << endl;
    }
};

int main()
{
    Base *b;
    Derived d;
    b = &d;
    b->show();
    return 0;
}
