#include <iostream>
using namespace std;
class Base1
{
    int data1;

public:
    Base1(int x)
    {
        data1 = x;
        cout << "Base1 Constructor Called" << endl;
    }
    void PrintData1()
    {
        cout << "The Value of Data1 is: " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int y)
    {
        data2 = y;
        cout << "Base2 Constructor Called" << endl;
    }
    void PrintData2()
    {
        cout << "The Value of Data2 is: " << data2 << endl;
    }
};

// class Derived : public Base1, virtual public Base2
class Derived : public Base1, public Base2
{
    int derive1, derive2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derive1 = c;
        derive2 = d;
        cout << "Derived Constructor is Called" << endl;
    }
    void PrintDerived()
    {
        cout << "The Value of Derive1 is: " << derive1 << endl;
        cout << "The Value of Derive2 is: " << derive2 << endl;
    }
};
int main()
{
    Derived obj1(1, 2, 3, 4);
    obj1.PrintData1();
    obj1.PrintData2();
    obj1.PrintDerived();
    return 0;
}