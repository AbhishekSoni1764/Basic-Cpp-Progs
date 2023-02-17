#include <iostream>
using namespace std;
class c1
{
    int a, b;

public:
    c1(void); // Constructor Declaration
    void display(void)
    {
        cout << "Your Number is " << a << "+" << b << "i" << endl;
    }
};

c1 ::c1(void)
{ // This is a Default constructor as it takes no values.
    a = 10;
    b = 30;
}
int main()
{
    c1 ca, cb, cv;
    ca.display();
    cb.display();
    cv.display();
    return 0;
}