#include <iostream>
using namespace std;
class BankDeposit
{
    int principal;
    int years;
    float returnValue;
    float interestRate;

public:
    BankDeposit(){};
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);
    void show();
};

BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    returnValue = returnValue * (1 + interestRate*y);
}

BankDeposit ::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;
    returnValue = returnValue * (1 + interestRate*y);
}

void BankDeposit ::show()
{
    cout << endl<< "The Principal amount was " << principal<< " and The Value after " << years << " years is "<< returnValue << endl;
}
int main()
{
    BankDeposit c1, c2;
    int p, y, R;
    float r;
    cout << "Enter the value of p,y and r : ";
    cin >> p >> y >> r;
    cout << endl;
    c1 = BankDeposit(p, y, r);
    c1.show();

    cout << "Enter the value of p,y and R : ";
    cin >> p >> y >> R;
    cout << endl;
    c2 = BankDeposit(p, y, R);
    c2.show();

    // c3 = BankDeposit();
    // c3.show();

    return 0;
}