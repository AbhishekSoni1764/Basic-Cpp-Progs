#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:
        void read(int x,int y){
            a = x;
            b = y;
        }
        void sum(complex o1, complex o2){
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }
        void display(void){
            cout<<"Your Number is "<<a<<"+"<<b<<"i"<<endl;
        }

};
int main(){
    complex c1,c2,c3;
    c1.read(1,2);
    c1.display();

    c2.read(3,4);
    c2.display();

    c3.sum(c1,c2);
    c3.display();
    return 0;
}       