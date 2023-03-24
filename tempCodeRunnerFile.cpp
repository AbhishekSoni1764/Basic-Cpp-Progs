#include <iostream>
#include <iomanip>
    using namespace std;

int main()
{
    int a = 1, b = 34, c = 124, d = 1234;
    cout << "Without setW: " << a << endl;
    cout << "Without setW: " << b << endl;
    cout << "Without setW: " << c << endl;
    cout << "Without setW: " << d << endl;
    cout << "With setW: " << setw(4) << a << endl;
    cout << "With setW: " << setw(4) << b << endl;
    cout << "With setW: " << setw(4) << c << endl;
    cout << "With setW: " << setw(4) << d << endl;

    return 0;
}