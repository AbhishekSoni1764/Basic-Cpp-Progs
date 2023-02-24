// virtual functions are used to undo the default behaviour of functions
#include <iostream>
using namespace std;
class baseclass
{
public:
    int var_base = 10;
    virtual void display()
    {
        cout << "The value of base class variable is: " << var_base << endl;
    }
};

class derived : public baseclass
{
public:
    int var_derived = 3400;
    void display()
    {
        cout << "The value of base class variable is: " << var_base << endl;
        cout << "The value of derive class variable is: " << var_derived << endl;
    }
};
int main()
{
    baseclass *base_class_pointer;
    derived *derive_class_pointer;
    derived obj1;
    derived obj2;
    base_class_pointer = &obj1;
    base_class_pointer->display();
    return 0;
}
