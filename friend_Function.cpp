#include <iostream>
using namespace std;
class Complex
{
    int a, b;
    friend Complex sumComplex(Complex o1, Complex o2); // If not declared as friend then the program wont work
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

Complex sumComplex(Complex o1, Complex o2)
{ // friend function declaration
    Complex o3;
    o3.read((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    Complex c1, c2, sum;
    c1.read(1, 2);
    c1.display();

    c2.read(3, 4);
    c2.display();
    // c1.sumComplex();   // friend function cannot be used with a predefined class object like c1 or c2
    sum = sumComplex(c1, c2);
    sum.display();
    return 0;
}
