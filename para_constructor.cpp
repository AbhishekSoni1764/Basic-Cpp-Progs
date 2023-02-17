#include <iostream>
using namespace std;
class c1
{
    int a, b;

public:
    c1(int, int); // Constructor Declaration
    void display(void)
    {
        cout << "Your Number is " << a << "+" << b << "i" << endl;
    }
};

c1 ::c1(int x, int y)
{ // This is a Default constructor as it takes no values.
    a = x;
    b = y;
}
int main()
{
    // Implicit declaration
    c1 c(4, 6);
    c.display();

    // Explicit declaration
    c1 d = c1(5, 7);
    d.display();
    return 0;
}