#include<iostream>
using namespace std;

class c2;

class c1{
    int val1;
    friend void swap(c1 &,c2 &);
    public:
        void getData(int a){
        val1 = a;
        }
        int display(void){
            return val1;
        }
};
class c2{
    int val2;
    friend void swap(c1 &,c2 &);
    public:
        void getData(int a){
        val2 = a;
        }
        int display(void){
            return val2;
        }
};

void swap(c1 &b,c2 &c){
    b.val1 = b.val1 + c.val2;
    c.val2 = b.val1 - c.val2;
    b.val1 = b.val1 - c.val2;
}

int main(){
    c1 object1;
    object1.getData(30);
    c2 object2;
    object2.getData(70);

    cout<<"Before swapping object1 is "<<object1.display()<<" and object2 is "<<object2.display()<<endl;
    swap(object1,object2);
    cout<<"After swapping object1 is "<<object1.display()<<" and object2 is "<<object2.display()<<endl;
    return 0;
}