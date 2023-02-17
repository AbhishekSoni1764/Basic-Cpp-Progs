#include<iostream>
using namespace std;
class employee
{
    private:
        int a,b,c;
    public:
        int d,e;
        void setdata(int a1,int a2,int a3);
        void getdata(){
            cout<<"Value of a is "<<a<<endl;
            cout<<"Value of b is "<<b<<endl;
            cout<<"Value of c is "<<c<<endl;
            cout<<"Value of d is "<<d<<endl;
            cout<<"Value of e is "<<e<<endl;
        }
};

void employee :: setdata(int a1,int a2,int a3){
    a = a1;
    b = a2;
    c = a3;
}
int main(){
    employee animal;
    animal.d = 12;
    animal.e = 54;
    animal.setdata(23,45,86);
    animal.getdata();
    return 0;
}