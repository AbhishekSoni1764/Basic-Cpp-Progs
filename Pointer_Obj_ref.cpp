// Base class ka pointer derived class ke obj ka address store krr skta hai
// Agar dono mai koi same function hai toh base class wala hi function call hoga isse "LATE BINDING" kehete hai.
// You can tell by seeing the program that which display will execute first but the system tells at the time of runtime.
// So, this is called RUNTIME POLYMORPHISM
#include<iostream>
using namespace std;
class baseclass{
        public:
            int var_base;
            void display(){
                cout<<"The value of base class variable is: "<<var_base<<endl;
            }   
};

class derived : public baseclass{
        public:
            int var_derived;
            void display(){
                cout<<"The value of base class variable is: "<<var_base<<endl;
                cout<<"The value of derive class variable is: "<<var_derived<<endl;
            }
};
int main(){
    baseclass *base_class_pointer;
    derived *derive_class_pointer;
    derived obj1;
    derived obj2;
    base_class_pointer = &obj1;
    base_class_pointer->var_base = 90;
    base_class_pointer->display();

    derive_class_pointer = &obj2;
    derive_class_pointer->var_base = 80;
    derive_class_pointer->var_derived = 3400;
    derive_class_pointer->display();
    return 0;
} 
