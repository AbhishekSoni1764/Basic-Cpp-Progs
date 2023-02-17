// #include <iostream>
// #include <math.h>
// using namespace std;
// class SimpleCal
// {
// protected:
//     int sum, sub, div, mul;

// public:
//     int add(int, int);
//     int subt(int, int);
//     float divi(int, int);
//     int mult(int, int);
// };

// int SimpleCal ::add(int n1, int n2)
// {
//     sum = n1 + n2;
// }
// int SimpleCal ::subt(int n1, int n2)
// {
//     sub = n1 - n2;
// }
// float SimpleCal ::divi(int n1, int n2)
// {
//     div = n1 / n2;
// }
// int SimpleCal ::mult(int n1, int n2)
// {
//     mul = n1 * n2;
// }

// class SciCal
// {
// protected:
//     int P;
//     float SQ, C;

// public:
//     int Power(int c1, int n)
//     {
//         P = pow(c1, n);
//     }
//     float SqRt(int c1)
//     {
//         SQ = sqrt(c1);
//     }
//     float cosine(int c1)
//     {
//         C = cos(c1);
//     }
// };

// class HybCal : public SimpleCal, public SciCal
// {
// public:
//     void show()
//     {
//         cout << "The SUM OF INPUTTED NUMBERS IS: " << sum << endl;
//         cout << "The SUBTRACTION OF INPUTTED NUMBERS IS: " << sub << endl;
//         cout << "The DIVISION OF INPUTTED NUMBERS IS: " << div << endl;
//         cout << "The MULTIPLICATION OF INPUTTED NUMBERS IS: " << mul << endl;
//         cout << "The Power OF INPUTTED NUMBER IS: " << P << endl;
//         cout << "The SQUAREROOT OF INPUTTED NUMBER IS: " << SQ << endl;
//         cout << "The COSINE OF INPUTTED NUMBER IS: " << C << endl;
//     }
// };
// int main()
// {
//     HybCal obj1;
//     obj1.add(10, 20);
//     obj1.subt(100, 20);
//     obj1.divi(20, 10);
//     obj1.mult(10, 20);
//     obj1.Power(10, 5);
//     obj1.SqRt(36);
//     obj1.cosine(90);

//     obj1.show();
//     return 0;
// }


