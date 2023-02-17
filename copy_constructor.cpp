#include<iostream>
using namespace std;
class Name{
    int a;
    public:
        Name(){
            a = 0;
        }
        Name(int num){
            a = num;
        }
        Name(Name &obj){
            cout<<"Copy Constructor Called"<<endl;
            a = obj.a;
        }
        void display(){
            cout<<"The Number is "<<a<<endl;

        }
};
int main(){
    Name x1(20),y1,z1(40);
    z1.display();
    Name z4(z1);
    z4.display();  
    Name z3 = x1;
    z3.display();
    return 0;
}