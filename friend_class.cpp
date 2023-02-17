#include <iostream>
using namespace std;
// FORWARD DECLARATION
class complex;
class calculator
{
public:
    int sumR(complex, complex);
    int sumC(complex, complex);
};
class complex
{
    int a, b;
    // Individually making friend
    // friend int calculator ::sumR(complex o1, complex o2);
    // friend int calculator ::sumC(complex o1, complex o2);

    // Declaring the whole class as friend
    friend class calculator;

public:
    void read(int x, int y)
    {
        a = x;
        b = y;
    }
    void display(void)
    {
        cout << "The Number is " << a << "+" << b << "i" << endl;
    }
};
int calculator ::sumR(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumC(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    complex c1, c2;
    c1.read(1, 2);
    c1.display();
    c2.read(3, 4);
    c2.display();
    calculator s;
    int sum = s.sumR(c1, c2);
    int sumc = s.sumC(c1, c2);
    cout << sum << endl;
    cout << sumc;
    return 0;
}