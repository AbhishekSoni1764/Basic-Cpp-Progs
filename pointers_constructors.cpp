#include<iostream>
using namespace std;
class Pointers{
    int a,b;
    public:
        void setdata(int x,int y){
            a=x;
            b=y;
        }
        void getdata(){
            cout<<"Value of a is: "<<a<<endl;
            cout<<"Value of b is: "<<b<<endl;
        }
};
int main(){
    Pointers p1;
    Pointers *ptr = &p1;    /*OR*/  // Pointers *ptr = new Pointers;
    (*ptr).setdata(20,10);  /*OR*/  // ptr->setdata(20,10);
    ptr->getdata();         /*OR*/  // (*ptr).getdata();
    return 0;
}       