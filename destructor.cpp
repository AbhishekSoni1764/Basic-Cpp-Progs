//Destructor Does not take any arguments nor it returns any value

#include<iostream>
using namespace std;
int count = 0; // Global variable
class num{
    public:
        num(){
            count++;
            cout<<"Constructor is called for object number "<<count<<endl;
        }
        ~num(){
            cout<<"Destructor is called for object "<<count<<endl;
            count--;
        }
};
int main(){
    cout<<"Creating First Object obj1"<<endl;
    num obj1;
    {                                                            //After exiting the block of obj1 destructor will be called automatically
        cout<<"Entering the Block of obj1"<<endl;
        cout<<"Creating 2 more object obj2 and obj3"<<endl;
        num obj2,obj3;
        cout<<"Exiting the Block"<<endl;
    }
    cout<<"Back To Main Function"<<endl;

    return 0;
}