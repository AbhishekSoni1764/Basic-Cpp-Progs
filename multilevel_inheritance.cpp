#include<iostream>
using namespace std;
class base1{
    protected:
    int base1int;
    public:
    void set_data1(int a){
        base1int = a;
    }
};
class base2{
    protected:
    int base2int;
    public:
    void set_data2(int a){
        base2int = a;
    }
};

class Derived : public base1,public base2{
    public:
        void show(){
            cout<<"Value of Base 1 is: "<<base1int<<endl;
            cout<<"Value of Base 2 is: "<<base2int<<endl;
            cout<<"The Sum of these values is: "<<base2int+base1int<<endl;
        }
};
int main(){
    Derived s1;
    s1.set_data1(10);
    s1.set_data2(5);
    s1.show();
    return 0;
}