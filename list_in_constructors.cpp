#include <iostream>
using namespace std;
class Test
{
    int a, b;

public:
    // Test(int x, int y) : a(x), b(y)
    // Test(int x, int y) : a(x), b(y+25)
    // Test(int x, int y) : a(x), b(y+x)
    Test(int x, int y) : a(x), b(y*x)
    // Test(int x, int y) : b(y),a(x+y)    // This will exexute but a will contain a garbage value as a was initialized first.
    {
        cout << "Constructor is called" << endl;
        cout << "Value of a is: " << a << endl;
        cout << "Value of b is: " << b << endl;
    }
};
int main()
{
    Test obj1(8, 2);
    return 0;
}