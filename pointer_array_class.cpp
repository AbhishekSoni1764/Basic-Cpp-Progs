#include <iostream>
using namespace std;
class Shop
{
    int ID, Prize;

public:
    void getdata(int a, int b)
    {
        ID = a;
        Prize = b;
    }
    void Display()
    {
        cout << "The ID of the Item is: " << ID << endl;
        cout << "The Prize of Item is: " << Prize << endl;
    }
};
int main()
{
    int size = 3;
    int p, q, i;
    Shop *arr = new Shop[size];
    Shop *arrTemp = arr;
    for (i = 0; i < size; i++)
    {
        cout << "Enter the ID and Prize of Item " << i + 1 << ": " << endl;
        cin >> p >> q;
        arr->getdata(p, q);
        arr++;
    }

    for (i = 0; i < size; i++)
    {
        cout << "Item Number: " << i + 1 << endl;
        arrTemp->Display();
        arrTemp++;
    }

    return 0;
}